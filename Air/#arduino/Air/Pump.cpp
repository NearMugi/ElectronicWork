#include "Arduino.h"
#include "Pump.h"
#include "ToggleSwitch.h"
ToggleSwitchManage _sw;

void Pump::Init(bool _isUseToggleSwitch) {
  pinMode(PIN_PUMP, OUTPUT);
  isUseToggleSwitch = _isUseToggleSwitch;
  isOn = false;
  _time_pump_on = 0;
  digitalWrite(PIN_PUMP, PUMP_OFF);

  if (isUseToggleSwitch) _sw.Init();
}
void Pump::Set_isPlay(bool _sw) {
  isOn = _sw;
}
bool Pump::Get_isPlay() {
  return isOn;
}

//ポンプON/OFF　ONを指示されている間稼働する。一定期間を超えたら強制的に止める
void Pump::UpdateOnOff(int _addTime) {

  //トグルスイッチを有効にする場合、コマンドに関係なくOn/Offを指定
  if (isUseToggleSwitch) {
    isOn = _sw.Port_Read();
  }

  //ON/Offを判断する
  if (isOn) {
    _time_pump_on += _addTime;
    if (_time_pump_on >= PUMP_CONTINUETIME) {
      _time_pump_on = PUMP_CONTINUETIME;
      digitalWrite(PIN_PUMP, PUMP_OFF);
    } else {
      digitalWrite(PIN_PUMP, PUMP_ON);
    }
  } else {
    _time_pump_on = 0;
    digitalWrite(PIN_PUMP, PUMP_OFF);
  }
}



