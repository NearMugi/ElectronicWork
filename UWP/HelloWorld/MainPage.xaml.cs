// Copyright (c) Microsoft. All rights reserved.

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace HelloWorld
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            InitializeComponent();

        }

        private void ClickMe_Click(object sender, RoutedEventArgs e)
        {
            HelloMessage.Text = "Hello, Windows 10 IoT Core!";
        }

        private DispatcherTimer _timer;
        // イベントの実行回数をカウントする変数
        private int _count;
        protected override void OnNavigatedTo(NavigationEventArgs e)
        {
            this._timer = new DispatcherTimer();
            // タイマーイベントの間隔を指定。
            // ここでは1秒おきに実行する
            this._timer.Interval = TimeSpan.FromSeconds(1);

            // 1秒おきに実行するイベントを指定
            this._timer.Tick += _timer_Tick;

            // タイマーイベントを開始する
            this._timer.Start();

        }

        private void _timer_Tick(object sender, object e)
        {
            // カウントを1加算
            this._count++;

            // TextBlockにカウントを表示
            this.Count.Text = this._count.ToString();
        }

    }
}
