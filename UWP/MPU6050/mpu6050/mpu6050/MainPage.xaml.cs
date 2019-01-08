﻿using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Core;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;

// 空白ページの項目テンプレートについては、https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x411 を参照してください

namespace mpu6050
{
    /// <summary>
    /// それ自体で使用できる空白ページまたはフレーム内に移動できる空白ページ。
    /// </summary>
    public sealed partial class MainPage : Page
    {
        MPU6050 _mpu6050 = new MPU6050();
        int _interruptCount = 0;
        DateTime _startTime;

        public MainPage()
        {
            this.InitializeComponent();
            _mpu6050.InitHardware();
            _mpu6050.SensorInterruptEvent += _mpu6050_SensorInterruptEvent;
            _startTime = DateTime.Now;

            textBoxLog.Text = _mpu6050.error;
        }

        private void _mpu6050_SensorInterruptEvent(object sender, MpuSensorEventArgs e)
        {
            var task = Dispatcher.RunAsync(CoreDispatcherPriority.Normal, () =>
            {
                _interruptCount += e.Values.Length;
                float samples_per_second = (float)_interruptCount / (float)((DateTime.Now - _startTime).Seconds);
                textBoxStatus.Text = String.Format("{0} {1} {2}", e.Status, e.SamplePeriod, samples_per_second);
                textBoxAccel.Text = String.Format("{0}, {1}, {2}", e.Values[0].AccelerationX, e.Values[0].AccelerationY, e.Values[0].AccelerationZ);
                textBoxGyro.Text = String.Format("{0}, {1}, {2}", e.Values[0].GyroX, e.Values[0].GyroY, e.Values[0].GyroZ);
            });
        }

        private void button_Click(object sender, RoutedEventArgs e)
        {
            _mpu6050.Dispose();
            Application.Current.Exit();
        }
    }
}
