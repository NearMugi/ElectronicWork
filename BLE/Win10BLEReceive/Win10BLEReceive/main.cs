using System;
using Windows.Devices.Bluetooth.Advertisement;
using Windows.Storage.Streams;

namespace Win10BLEReceive
{
    class main
    {
        private void OnAdvertisementReceived(BluetoothLEAdvertisementWatcher watcher, BluetoothLEAdvertisementReceivedEventArgs eventArgs)
        {
            //プロパティ値から取得
            DateTimeOffset timestamp = eventArgs.Timestamp;
            BluetoothLEAdvertisementType advertisementType = eventArgs.AdvertisementType;

            iBeacon bcon = new iBeacon(eventArgs);

            string retBeaconData;
            retBeaconData = "{";
            retBeaconData += string.Format("uuid:'{0}',", bcon.UUID);//"00000000-0000-0000-0000-000000000000"
            retBeaconData += string.Format("major:{0},", bcon.Major.ToString("D"));
            retBeaconData += string.Format("minor:{0},", bcon.Minor.ToString("D"));
            retBeaconData += string.Format("measuredPower:{0},", bcon.MeasuredPower.ToString("D"));
            retBeaconData += string.Format("rssi:{0},", bcon.Rssi.ToString("D"));
            retBeaconData += string.Format("accuracy:{0},", bcon.Accuracy.ToString("F6"));
            retBeaconData += string.Format("proximity:'{0}'", bcon.Proximity);
            retBeaconData += "}";

            Console.WriteLine(string.Format("timestamp:{0}", timestamp.ToString("HH\\:mm\\:ss\\.fff")));
            Console.WriteLine(retBeaconData);
        }
    }
}
