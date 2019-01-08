//UWP形式でコンパイルした後差し替える


using System;

public class mpu6050
{
    #region Singleton

    private static mpu6050 m_instance;

    public mpu6050()
    {
        if (m_instance != null)
        {
            return;
        }
        m_instance = this;
    }

    public static mpu6050 instance
    {
        get
        {
            if (m_instance == null)
            {
                new mpu6050();
            }
            return m_instance;
        }
    }

    #endregion Singleton

    public class MpuSensorValue
    {
        public float AccelerationX { get; set; }
        public float AccelerationY { get; set; }
        public float AccelerationZ { get; set; }
        public float GyroX { get; set; }
        public float GyroY { get; set; }
        public float GyroZ { get; set; }
    }

    public class MpuSensorEventArgs : EventArgs
    {
        public byte Status { get; set; }
        public float SamplePeriod { get; set; }
        public MpuSensorValue[] Values { get; set; }
    }

    //丸々差し替える。
    public partial class MPU6050
    {
        public MpuSensorValue LastValues { get; set; }
        public async void InitHardware() {
            
        }
    }
}
