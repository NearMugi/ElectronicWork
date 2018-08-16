#include "Arduino.h"
#include "Valve.h"

void Valve::Init() {
  pinMode(VALVE, OUTPUT);
  ValveInit(); 
}

//実行を指定
void Valve::Set_isPlay(bool _sw) {
  isEnablePlay = _sw;
}

bool Valve::Get_isEnablePlay() {
  return isEnablePlay;
}
bool Valve::Get_isValveOpen() {
  return isValveOpen;
}
bool Valve::Get_isValveOneloopEnd() {
  return isValveOneloopEnd;
}

//電磁弁ON/OFF　ONを指示されている間OnOffを繰り返す。On時に一定期間を超えたら強制的に止める
void Valve::UpdateOnOff(int intTime) {

  //電磁弁がONになり続けていないかチェックする
  if (_chkTime_valve >= VALVE_CONTINUETIME) {
    ValveInit();
    return;
  }

  //OFFの時
  if (!isEnablePlay) {
    ValveInit();
    return;
  }

  //ONの時
  _time_valve_on += intTime;
  long ofs = _set_oneTime * _done_cycleCnt;
  long OneloopSize = _set_oneTime * (unsigned long)(_done_cycleCnt + 1);
  if (_time_valve_on <= OneloopSize) { //1サイクル内
    isValveOneloopEnd = false;
    if (_time_valve_on <= _set_oneTime_on + ofs) {
      digitalWrite(VALVE, VALVE_ON);
      isValveOpen = true;
      _chkTime_valve += intTime;
    } else {
      digitalWrite(VALVE, VALVE_OFF);
      isValveOpen = false;
      _chkTime_valve = 0;
    }

  } else {  //1サイクル終わった
    isValveOneloopEnd = true;
    //Serial.println("--- One Cycle End ---");
    //指定回数実行した場合、終了する
    if (_done_cycleCnt >= (_set_cycleCnt - 1)) {
      ValveInit();

    } else {
      //まだ実行するのでONにする
      digitalWrite(VALVE, VALVE_ON);
      isValveOpen = true;
      _chkTime_valve += intTime;
      _done_cycleCnt++;
    }
  }
}

void Valve::ValveInit() {
  digitalWrite(VALVE, VALVE_OFF);
  
  isEnablePlay = false;
  isValveOpen = false;
  isValveOneloopEnd = false;

  _chkTime_valve = 0;
  _done_cycleCnt = 0;
  _time_valve_on = 0;
}

