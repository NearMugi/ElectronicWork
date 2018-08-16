#include "Arduino.h"
#include "PhotoelectricSensor.h"

void PhotoelectricSensorManage::Init() {
  pinMode(PHOTO_SENSOR, INPUT);
  isEnable = false;
  _on = false;
  _OnCnt = 0;
}

void PhotoelectricSensorManage::Set_isEnable(bool _sw) {
  isEnable = _sw;
}

bool PhotoelectricSensorManage::Get_isEnable(){
  return isEnable;
}

bool PhotoelectricSensorManage::Port_Read() {
  //チャタリングを考慮
  //センサーの値True…OFF状態、False…ON状態
  bool sw = digitalRead(PHOTO_SENSOR);

  if (sw) {
    _on = false;
    _OnCnt = 0;
  } else {
    _OnCnt++;
    if (_OnCnt >= ONCNT_MAX) {
      _on = true;
      _OnCnt = ONCNT_MAX;
    }
  }

  if (_on) {
    _on = false;
    _OnCnt = 0;
    return true;
  } else {
    return false;
  }
}

