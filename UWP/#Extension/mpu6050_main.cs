//Žg—p—á

namespace Mpu6050
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        MPU6050 _mpu6050 = new MPU6050();

        public MainPage()
        {
            _mpu6050.InitHardware();
        }

        private void button_Click(object sender, RoutedEventArgs e)
        {
            _mpu6050.Dispose();
            Application.Current.Exit();
        }
    }
}