#define RESTRICT_PITCH  // Comment out to restrict roll to ±90deg instead - please read: http://www.freescale.com/files/sensors/doc/app_note/AN3461.pdf
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

#if WINDOWS_UWP
using Windows.Devices.Enumeration;
using Windows.Devices.I2c;
using Windows.Devices.Gpio;
#endif

//これを参考にしている。
//https://garchiving.com/how-to-use-mpu6050-in-arduino/
//https://courses.cs.washington.edu/courses/cse474/17wi/labs/l4/MPU6050BasicExample.ino
namespace mpu6050
{

    public class MpuSensorValue
    {
        public float AccelerationX { get; set; }
        public float AccelerationY { get; set; }
        public float AccelerationZ { get; set; }
        public float GyroX { get; set; }
        public float GyroY { get; set; }
        public float GyroZ { get; set; }
        public float degX { get; set; }
        public float degY { get; set; }
        public float degZ { get; set; }

    }

    public partial class MPU6050 : IDisposable
    {
        //アドレス
        public const byte ADDRESS = 0x68;   //デバイスアドレス
        private const byte PWR_MGMT_1 = 0x6B;   //内部クロック
        private const byte SMPLRT_DIV = 0x19;
        private const byte CONFIG = 0x1A;   //ローパスフィルタ
        private const byte GYRO_CONFIG = 0x1B;  //gyro config
        private const byte ACCEL_CONFIG = 0x1C; //acceleration config
        private const byte FIFO_EN = 0x23;
        private const byte INT_ENABLE = 0x38;
        private const byte INT_STATUS = 0x3A;
        private const byte USER_CTRL = 0x6A;
        private const byte FIFO_COUNT = 0x72;
        private const byte FIFO_R_W = 0x74;


        //I2cで取得するデータ
        private const int SensorBytes = 12;
        private byte[] SensorData = new byte[SensorBytes];

#if WINDOWS_UWP
        I2cDevice _mpu6050Device = null;
        private GpioController IoController;
#endif
        
        //mpu6050から取得したそのままのデータ
        class BaseValue
        {
            public short xa;
            public short ya;
            public short za;
            public short xg;
            public short yg;
            public short zg;
        }
        BaseValue _tmpValues;
        MpuSensorValue Values;
        String Msg;

        //加速度・ジャイロ・角度の計算用
        private const float gyrosensitivity = 131.0f;   // = 131 LSB/degrees/sec
        private const float accelsensitivity = 16384.0f;  // = 16384 LSB/g
        private const float RAD_TO_DEG = 180.0f / (float)Math.PI;

        Kalman.Kalman kalmanX; // Create the Kalman instances
        Kalman.Kalman kalmanY;

        //加速度から算出した角度
        double roll;
        double pitch;
        
        double gyroXangle, gyroYangle; // Angle calculate using the gyro only
        double compAngleX, compAngleY; // Calculated angle using a complementary filter
        double kalAngleX, kalAngleY; // Calculated angle using a Kalman filter

        float dt;


        public MpuSensorValue getValue()
        {
            return Values;
        }
        public String getMsg()
        {
            return Msg;
        }

        private byte ReadByte(byte regAddr)
        {
            byte[] buffer = new byte[1];
            buffer[0] = regAddr;
            byte[] value = new byte[1];
#if WINDOWS_UWP
            _mpu6050Device.WriteRead(buffer, value);
#endif
            return value[0];
        }

        private byte[] ReadBytes(byte regAddr, int length)
        {
            byte[] values = new byte[length];
            byte[] buffer = new byte[1];
            buffer[0] = regAddr;
#if WINDOWS_UWP
            _mpu6050Device.WriteRead(buffer, values);
#endif
            return values;
        }
        
        ushort getFifoCnt(){
            byte[] buffer = ReadBytes(FIFO_COUNT, 2);
            return (ushort)(((int)buffer[0] << 8) | (int)buffer[1]);
        }


        void WriteByte(byte regAddr, byte data)
        {
            byte[] buffer = new byte[2];
            buffer[0] = regAddr;
            buffer[1] = data;
#if WINDOWS_UWP
            _mpu6050Device.Write(buffer);
#endif
        }

        public async void InitHardware()
        {
            try
            {
                _tmpValues = new BaseValue();
                Values = new MpuSensorValue();
                kalmanX = new Kalman.Kalman();
                kalmanY = new Kalman.Kalman();

                kalmanX.setAngle(0); // Set starting angle
                kalmanY.setAngle(0);
                gyroXangle = 0;
                gyroYangle = 0;
                compAngleX = 0;
                compAngleY = 0;

#if WINDOWS_UWP
                Msg = "[Start InitHardware]\n";
                IoController = GpioController.GetDefault();

                string aqs = I2cDevice.GetDeviceSelector();
                DeviceInformationCollection collection = await DeviceInformation.FindAllAsync(aqs);

                I2cConnectionSettings settings = new I2cConnectionSettings(ADDRESS);
                settings.BusSpeed = I2cBusSpeed.FastMode; // 400kHz clock
                settings.SharingMode = I2cSharingMode.Exclusive;
                _mpu6050Device = await I2cDevice.FromIdAsync(collection[0].Id, settings);

                await Task.Delay(3); // wait power up sequence

                WriteByte(PWR_MGMT_1, 0x80);// reset the device
                await Task.Delay(100);
                WriteByte(PWR_MGMT_1, 0x2);
                WriteByte(USER_CTRL, 0x04); //reset fifo

                WriteByte(PWR_MGMT_1, 1); // clock source = gyro x
                WriteByte(GYRO_CONFIG, 0); // +/- 250 degrees sec
                WriteByte(ACCEL_CONFIG, 0); // +/- 2g

                WriteByte(CONFIG, 1); // 184 Hz, 2ms delay
                WriteByte(SMPLRT_DIV, 19);  // set rate 50Hz
                WriteByte(FIFO_EN, 0x78); // enable accel and gyro to read into fifo
                WriteByte(USER_CTRL, 0x40); // reset and enable fifo
                WriteByte(INT_ENABLE, 0x1);
#endif
            }
            catch (Exception ex)
            {
                string error = ex.ToString();
                Msg = error;
            }
        }

        public void update()
        {
            if (ReadSensorData())
            {
                CalculateValue();
            }
        }



        bool ReadSensorData()
        {
#if WINDOWS_UWP
            //Msg = "[Start ReadSensorData]\n";
            if (_mpu6050Device == null) {
                //Msg = "[_mpu6050Device null]\n";
                return false;
            }
            int interrupt_status = ReadByte(INT_STATUS);
            if ((interrupt_status & 0x10) != 0)
            {
                Msg = "[(interrupt_status & 0x10) != 0]\n";
                WriteByte(USER_CTRL, 0x44); // reset and enable fifo
            }
            if ((interrupt_status & 0x1) != 0)
            {
                Msg = "[(interrupt_status & 0x1) != 0]\n";
                if (getFifoCnt() >= SensorBytes)
                {
                    SensorData = ReadBytes(FIFO_R_W, (byte)SensorBytes);

                    _tmpValues.xa = (short)((int)SensorData[0] << 8 | (int)SensorData[1]);
                    _tmpValues.ya = (short)((int)SensorData[2] << 8 | (int)SensorData[3]);
                    _tmpValues.za = (short)((int)SensorData[4] << 8 | (int)SensorData[5]);

                    _tmpValues.xg = (short)((int)SensorData[6] << 8 | (int)SensorData[7]);
                    _tmpValues.yg = (short)((int)SensorData[8] << 8 | (int)SensorData[9]);
                    _tmpValues.zg = (short)((int)SensorData[10] << 8 | (int)SensorData[11]);

                    Msg = "[Get Values]\n";
                    return true;
                }
            }
#endif
            return false;
        }

        void CalculateValue()
        {
            Values.AccelerationX = (float)_tmpValues.xa / accelsensitivity;
            Values.AccelerationY = (float)_tmpValues.ya / accelsensitivity;
            Values.AccelerationZ = (float)_tmpValues.za / accelsensitivity;
            Values.GyroX = (float)_tmpValues.xg / gyrosensitivity;
            Values.GyroY = (float)_tmpValues.yg / gyrosensitivity;
            Values.GyroZ = (float)_tmpValues.zg / gyrosensitivity;


            dt = Time.deltaTime;
            //dt = 1/30f;

            // Source: http://www.freescale.com/files/sensors/doc/app_note/AN3461.pdf eq. 25 and eq. 26
            // atan2 outputs the value of -π to π (radians) - see http://en.wikipedia.org/wiki/Atan2
            // It is then converted from radians to degrees
#if RESTRICT_PITCH
            roll = Math.Atan2(_tmpValues.ya, _tmpValues.za) * RAD_TO_DEG;
            pitch = Math.Atan((-1 * _tmpValues.xa) / Math.Sqrt(_tmpValues.ya * _tmpValues.ya + _tmpValues.za * _tmpValues.za)) * RAD_TO_DEG;
#else
            roll = Math.Atan(_tmpValues.ya / Math.Sqrt(_tmpValues.xa * _tmpValues.xa + _tmpValues.za * _tmpValues.za)) * RAD_TO_DEG;
            pitch = Math.Atan2((-1 * _tmpValues.xa), _tmpValues.za) * RAD_TO_DEG;
#endif

            double gyroXrate = Values.GyroX; // Convert to deg/s
            double gyroYrate = Values.GyroY; // Convert to deg/s

#if RESTRICT_PITCH
            // This fixes the transition problem when the accelerometer angle jumps between -180 and 180 degrees
            if ((roll < -90 && kalAngleX > 90) || (roll > 90 && kalAngleX < -90))
            {
                kalmanX.setAngle((float)roll);
                compAngleX = roll;
                kalAngleX = roll;
                gyroXangle = roll;
            }
            else
                kalAngleX = kalmanX.getAngle((float)roll, (float)gyroXrate, dt); // Calculate the angle using a Kalman filter

            if (Math.Abs(kalAngleX) > 90)
                gyroYrate = -gyroYrate; // Invert rate, so it fits the restriced accelerometer reading
            kalAngleY = kalmanY.getAngle((float)pitch, (float)gyroYrate, dt);
#else
            // This fixes the transition problem when the accelerometer angle jumps between -180 and 180 degrees
            if ((pitch < -90 && kalAngleY > 90) || (pitch > 90 && kalAngleY < -90))
            {
                kalmanY.setAngle((float)pitch);
                compAngleY = pitch;
                kalAngleY = pitch;
                gyroYangle = pitch;
            }
            else
                kalAngleY = kalmanY.getAngle((float)pitch, (float)gyroYrate, dt); // Calculate the angle using a Kalman filter

            if (Math.Abs(kalAngleY) > 90)
                gyroXrate = -gyroXrate; // Invert rate, so it fits the restriced accelerometer reading
            kalAngleX = kalmanX.getAngle((float)roll, (float)gyroXrate, dt); // Calculate the angle using a Kalman filter
#endif

            gyroXangle += gyroXrate * dt; // Calculate gyro angle without any filter
            gyroYangle += gyroYrate * dt;

            compAngleX = 0.93 * (compAngleX + gyroXrate * dt) + 0.07 * roll; // Calculate the angle using a Complimentary filter
            compAngleY = 0.93 * (compAngleY + gyroYrate * dt) + 0.07 * pitch;

            // Reset the gyro angle when it has drifted too much
            if (gyroXangle < -180 || gyroXangle > 180)
                gyroXangle = kalAngleX;
            if (gyroYangle < -180 || gyroYangle > 180)
                gyroYangle = kalAngleY;

            Values.degX = (float)compAngleX;
            Values.degY = (float)compAngleY;
            

        }


        #region IDisposable Support
        private bool disposedValue = false; // To detect redundant calls

        protected virtual void Dispose(bool disposing)
        {
            if (!disposedValue)
            {
#if WINDOWS_UWP
                if (_mpu6050Device != null)
                {
                    _mpu6050Device.Dispose();
                    _mpu6050Device = null;
                }
#endif
                disposedValue = true;

            }
        }

        ~MPU6050()
        {
            // Do not change this code. Put cleanup code in Dispose(bool disposing) above.
            Dispose(false);
        }

        // This code added to correctly implement the disposable pattern.
        public void Dispose()
        {
            // Do not change this code. Put cleanup code in Dispose(bool disposing) above.
            Dispose(true);
            GC.SuppressFinalize(this);
        }
        #endregion

    }
}