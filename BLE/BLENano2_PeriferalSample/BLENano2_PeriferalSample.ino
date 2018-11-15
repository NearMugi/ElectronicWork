#include <nRF5x_BLE_API.h>

#define TXRX_BUF_LEN 20
#define DEVICE_NAME  "MyBlePeripheral"

BLE ble;

enum ble_error {
  BleError_NONE = 0 , //No error.
  BleError_BUFFER_OVERFLOW , //The requested action would cause a buffer overflow and has been aborted.
  BleError_NOT_IMPLEMENTED , //Requested a feature that isn't yet implemented or isn't supported by the target HW.
  BleError_PARAM_OUT_OF_RANGE , //One of the supplied parameters is outside the valid range.
  BleError_INVALID_PARAM , //One of the supplied parameters is invalid.
  Ble_STACK_BUSY , //The stack is busy.
  BleError_INVALID_STATE , //Invalid state.
  BleError_NO_MEM , //Out of memory.
  BleError_OPERATION_NOT_PERMITTED , //The operation requested is not permitted.
  BleError_INITIALIZATION_INCOMPLETE , //The BLE subsystem has not completed its initialization.
  BleError_ALREADY_INITIALIZED , //The BLE system has already been initialized.
  BleError_UNSPECIFIED , //Unknown error.
  BleError_INTERNAL_STACK_FAILURE  //The platform-specific stack failed.
};


//Timer
Ticker ticker;

//データの格納する配列
//uint8_t = 0~255
static uint8_t tx_buf[TXRX_BUF_LEN];

// The uuid of service and characteristics
static const uint8_t service_uuid[]        = {0x71, 0x3D, 0, 0, 0x50, 0x3E, 0x4C, 0x75, 0xBA, 0x94, 0x31, 0x48, 0xF1, 0x8D, 0x94, 0x1E};
static const uint8_t service_chars_uuid[]  = {0x71, 0x3D, 0, 1, 0x50, 0x3E, 0x4C, 0x75, 0xBA, 0x94, 0x31, 0x48, 0xF1, 0x8D, 0x94, 0x1E};
// Used in advertisement
static const uint8_t uart_base_uuid_rev[]  = {0x1E, 0x94, 0x8D, 0xF1, 0x48, 0x31, 0x94, 0xBA, 0x75, 0x4C, 0x3E, 0x50, 0, 0, 0x3D, 0x71};

uint8_t chars_value[TXRX_BUF_LEN] = {0}; //初期化

// Create characteristic
//Notifyのみもらう
GattCharacteristic characteristic(service_chars_uuid, chars_value, 1, TXRX_BUF_LEN, GattCharacteristic::BLE_GATT_CHAR_PROPERTIES_NOTIFY);
GattCharacteristic *uartChars[] = {&characteristic};
//Create service
GattService uartService(service_uuid, uartChars, sizeof(uartChars) / sizeof(GattCharacteristic *));


//connect task
void connectionCallBack( const Gap::ConnectionCallbackParams_t *params ) {
  uint8_t index;
  if (params->role == Gap::PERIPHERAL) {
    Serial.println("Peripheral ");
  }

  Serial.print("The conn handle : ");
  Serial.println(params->handle, HEX);
  Serial.print("The conn role : ");
  Serial.println(params->role, HEX);

  Serial.print("The peerAddr type : ");
  Serial.println(params->peerAddrType, HEX);
  Serial.print("  The peerAddr : ");
  for (index = 0; index < 6; index++) {
    Serial.print(params->peerAddr[index], HEX);
    Serial.print(" ");
  }
  Serial.println(" ");

  Serial.print("The ownAddr type : ");
  Serial.println(params->ownAddrType, HEX);
  Serial.print("  The ownAddr : ");
  for (index = 0; index < 6; index++) {
    Serial.print(params->ownAddr[index], HEX);
    Serial.print(" ");
  }
  Serial.println(" ");

  Serial.print("The min connection interval : ");
  Serial.println(params->connectionParams->minConnectionInterval, HEX);
  Serial.print("The max connection interval : ");
  Serial.println(params->connectionParams->maxConnectionInterval, HEX);
  Serial.print("The slaveLatency : ");
  Serial.println(params->connectionParams->slaveLatency, HEX);
  Serial.print("The connectionSupervisionTimeout : ");
  Serial.println(params->connectionParams->connectionSupervisionTimeout, HEX);
}

//disconect tack
void disconnectionCallBack(const Gap::DisconnectionCallbackParams_t *params) {
  Serial.print("Disconnected hande : ");
  Serial.println(params->handle, HEX);
  Serial.print("Disconnected reason : ");
  Serial.println(params->reason, HEX);
  Serial.println("Restart advertising ");
  ble.startAdvertising();
}

//Timer Task(Notify Task)
void task_handle(void) {
  Serial.println("Task handle ");
  for (int i = 0; i < TXRX_BUF_LEN; i++) {
    tx_buf[i] += 1;
  }

  //Change Notify Data
  ble.updateCharacteristicValue(characteristic.getValueAttribute().getHandle(), tx_buf, TXRX_BUF_LEN);
}


void SetAdvertisement() {
  ble.accumulateAdvertisingPayload(GapAdvertisingData::BREDR_NOT_SUPPORTED | GapAdvertisingData::LE_GENERAL_DISCOVERABLE);
  // Add short name to advertisement
  ble.accumulateAdvertisingPayload(GapAdvertisingData::SHORTENED_LOCAL_NAME, (const uint8_t *)"TXRX", 4);
  // Add complete 128bit_uuid to advertisement
  ble.accumulateAdvertisingPayload(GapAdvertisingData::COMPLETE_LIST_128BIT_SERVICE_IDS, (const uint8_t *)uart_base_uuid_rev, sizeof(uart_base_uuid_rev));
  // Add complete device name to scan response data
  ble.accumulateScanResponse(GapAdvertisingData::COMPLETE_LOCAL_NAME, (const uint8_t *)DEVICE_NAME, sizeof(DEVICE_NAME) - 1);
}

void setup() {
  Serial.begin(115200);
  ble_error err;
  
  //BLE設定
  err = (ble_error)ble.init();
  Serial.println(err);
  
  ble.onConnection(connectionCallBack);
  ble.onDisconnection(disconnectionCallBack);

  //set advertisement
  SetAdvertisement();

  // set adv_type
  ble.setAdvertisingType(GapAdvertisingParams::ADV_CONNECTABLE_UNDIRECTED);
  // add service
  ble.addService(uartService);
  // set device name
  ble.setDeviceName((const uint8_t *)DEVICE_NAME);
  // set tx power,valid values are -40, -20, -16, -12, -8, -4, 0, 4
  ble.setTxPower(4);
  // set adv_interval, 100ms in multiples of 0.625ms.
  ble.setAdvertisingInterval(160);
  // set adv_timeout, in seconds
  ble.setAdvertisingTimeout(0);

  // get BLE stack version
  Serial.print("BLE stack verison is : ");
  Serial.println(ble.getVersion());

  // start advertising
  err = (ble_error)ble.startAdvertising();
  Serial.println((ble_error)err);

  //Initialize Data
  for (int i = 0; i < TXRX_BUF_LEN; i++) {
    tx_buf[i] = 0;
  }

  // Start Task
  ticker.attach(task_handle, 1);
}

void loop() {
  ble.waitForEvent();
}
