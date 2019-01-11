using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


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
        MpuSensorValue LastValues { get; set; }
        String Msg;

        public MpuSensorValue getLastValue()
        {
            return LastValues;
        }
        public String getMsg()
        {
            return Msg;
        }

#if WINDOWS_UWP
        private const float  gyrosensitivity  = 131;   // = 131 LSB/degrees/sec
        private const float  accelsensitivity = 16384;  // = 16384 LSB/g

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

        I2cDevice _mpu6050Device = null;
        private GpioController IoController;

        private byte ReadByte(byte regAddr)
        {
            byte[] buffer = new byte[1];
            buffer[0] = regAddr;
            byte[] value = new byte[1];
            _mpu6050Device.WriteRead(buffer, value);
            return value[0];
        }

        private byte[] ReadBytes(byte regAddr, int length)
        {
            byte[] values = new byte[length];
            byte[] buffer = new byte[1];
            buffer[0] = regAddr;
            _mpu6050Device.WriteRead(buffer, values);
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
            _mpu6050Device.Write(buffer);
        }

#endif
        public async void InitHardware()
        {
            try
            {
                LastValues = new MpuSensorValue();
#if WINDOWS_UWP
                Msg = "[Start InitHardware]";
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
                WriteByte(PWR_MGMT_1, 0x00); //内部クロックを設定 (元は0x02)
                //WriteByte(USER_CTRL, 0x04); //reset fifo

                //WriteByte(PWR_MGMT_1, 1); // clock source = gyro x
                WriteByte(GYRO_CONFIG, 0x08); 
                WriteByte(ACCEL_CONFIG, 0x10);
                WriteByte(CONFIG, 0x03); // 184 Hz, 2ms delay

                //WriteByte(SMPLRT_DIV, 19);  // set rate 50Hz
                //WriteByte(FIFO_EN, 0x78); // enable accel and gyro to read into fifo
                //WriteByte(USER_CTRL, 0x40); // reset and enable fifo
                //WriteByte(INT_ENABLE, 0x1);
#endif
            }
            catch (Exception ex)
            {
                string error = ex.ToString();
            }
        }
        public void ReadSensorData()
        {
#if WINDOWS_UWP
            Msg = "[Start ReadSensorData]";
            if (_mpu6050Device == null) {
                return;
            }
            int interrupt_status = ReadByte(INT_STATUS);
            if ((interrupt_status & 0x10) != 0)
            {
                WriteByte(USER_CTRL, 0x44); // reset and enable fifo
            }
            if ((interrupt_status & 0x1) != 0)
            {
                if (getFifoCnt() >= SensorBytes)
                {
                    SensorData = ReadBytes(FIFO_R_W, (byte)SensorBytes);

                    short xa = (short)((int)SensorData[0] << 8 | (int)SensorData[1]);
                    short ya = (short)((int)SensorData[2] << 8 | (int)SensorData[3]);
                    short za = (short)((int)SensorData[4] << 8 | (int)SensorData[5]);

                    short xg = (short)((int)SensorData[6] << 8 | (int)SensorData[7]);
                    short yg = (short)((int)SensorData[8] << 8 | (int)SensorData[9]);
                    short zg = (short)((int)SensorData[10] << 8 | (int)SensorData[11]);

                    LastValues.AccelerationX = (float)xa / accelsensitivity;
                    LastValues.AccelerationY = (float)ya / accelsensitivity;
                    LastValues.AccelerationZ = (float)za / accelsensitivity;
                    LastValues.GyroX = (float)xg / gyrosensitivity;
                    LastValues.GyroY = (float)yg / gyrosensitivity;
                    LastValues.GyroZ = (float)zg / gyrosensitivity;
                    Msg = "[Update LastValues]";
                }
            }
#endif
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