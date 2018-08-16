#include "Arduino.h"
#include "PotentioMeter.h"

//コンストラクタ
PotentioMeterManage::PotentioMeterManage() {

}

void PotentioMeterManage::Port_Init(int pin) {
  PIN = pin;
  pinMode(PIN, INPUT);
  NowStatus = STATUS_INIT;
    for (int i = 0; i < aveCnt; i++) {
    analogValue[i] = 0;
  }

}

void PotentioMeterManage::Port_Read() {
  int ave = 0;
  for (int i = 0; i < aveCnt-1; i++) {
    analogValue[i] = analogValue[i + 1];
    ave += analogValue[i];
  }
  analogValue[aveCnt - 1] = analogRead(PIN);
  ave += analogValue[aveCnt - 1];
  analogValue_ave = ave / aveCnt;


}

void PotentioMeterManage::SetAnalog_min(int v) {
  ANALOG_MIN = v;
}

void PotentioMeterManage::SetAnalog_max(int v) {
  ANALOG_MAX = v;
}

void PotentioMeterManage::SetAnalog_center(int v) {
  ANALOG_CENTER = v;
}

void PotentioMeterManage::SetDigitalValue() {
  digitalValue = chgAnalogToDigital(analogValue[aveCnt - 1]);
}
void PotentioMeterManage::SetDigitalValue_ave() {
  digitalValue_ave = chgAnalogToDigital(analogValue_ave);
}

int PotentioMeterManage::GetLastAnalogValue() {
  return analogValue[aveCnt - 1];
}

float PotentioMeterManage::GetdigitalValue() {
  return digitalValue;
}

int PotentioMeterManage::GetanalogValue_ave() {
  return analogValue_ave;
}

float PotentioMeterManage::GetdigitalValue_ave() {
  return digitalValue_ave;
}


float PotentioMeterManage::chgAnalogToDigital(int v) {
  float rtn = 0.0f;
  //中心が必ずしも(max-min)/2ではないので場合分けする
  if (v <= ANALOG_CENTER) {
    //min～centerの場合
    rtn = ((float)(v - ANALOG_MIN) / (ANALOG_CENTER - ANALOG_MIN)) * (DIGITAL_CENTER - DIGITAL_MIN) + DIGITAL_MIN;
    //補正
    if(rtn < DIGITAL_MIN) rtn = DIGITAL_MIN;
  } else {
    //center～maxの場合
    rtn = ((float)(v - ANALOG_CENTER) / (ANALOG_MAX - ANALOG_CENTER)) * (DIGITAL_MAX - DIGITAL_CENTER) + DIGITAL_CENTER;
    //補正
    if(rtn > DIGITAL_MAX) rtn = DIGITAL_MAX;
  }

  return rtn;
}

