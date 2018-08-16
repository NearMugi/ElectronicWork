#include "Arduino.h"
#include "ToggleSwitch.h"

void ToggleSwitchManage::Init() {
  pinMode(TOGGLE_SWITCH, INPUT);
  _on = false;
  _OnCnt = 0;
}

bool ToggleSwitchManage::Port_Read() {
  //チャタリングを考慮する
  bool sw = digitalRead(TOGGLE_SWITCH);
  if (!sw) {
    _on = false;
    _OnCnt = 0;
  } else {
    _OnCnt++;
    if (_OnCnt >= ONCNT_MAX) {
      _on = true;
      _OnCnt = ONCNT_MAX;
    }
  }

  return _on;
}
