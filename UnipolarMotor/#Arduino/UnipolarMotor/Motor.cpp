#include "Arduino.h"
#include "Motor.h"

//コンストラクタ
Motor::Motor()
{

}
void Motor::Init(float _angle)
{
  pps = PPS_ERR;
  angle = _angle;
  cycleCnt = (int)(360 / _angle);
  CycleTime = MICROSEC_ERR;
  dir = DIR_FORWARD;
  nowPos = None;
  play = STOP;
  CntTime = 0;
}

//割込み処理で秒数を加算
bool Motor::AddCntTime(unsigned int _time) {
  bool sw = false;
  if (play) {
    CntTime += _time;
    if (CntTime > CycleTime) {
      SetNextPos();
      CntTime = 0;
      sw = true;
    }
  }
  return sw;
}

bool Motor::GetStatusReady() {
  bool sw = true;
  if (pps == PPS_ERR) sw = false;
  if (CycleTime == MICROSEC_ERR) sw = false;
  return sw;
}

bool Motor::GetStatusPlay() {
  return play;
}

void Motor::SetNextPos()
{
  if (play) {
    if (dir == DIR_FORWARD) {
      nowPos = nowPos + (POS)1;
    } else {
      nowPos = nowPos - (POS)1;
    }

    if (nowPos <= None) nowPos = a3;
    if (nowPos >= Terminal) nowPos = a0;

  } else {
    nowPos = None;
  }

  nowPosPtn = PosPtn[nowPos];
}

void Motor::Setplay(bool sw)
{
  bool _sw = sw;
  if (pps < PPS_MIN || pps > PPS_MAX) _sw = STOP;
  if (CycleTime < MICROSEC_MIN || CycleTime > MICROSEC_MAX) _sw = STOP;
  play = _sw;
  CntTime = 0;
}

void Motor::Setdir(bool sw)
{
  dir = sw;
}

void Motor::Setpps(int _pps)
{
  if (_pps < PPS_MIN || _pps > PPS_MAX) {
    pps = PPS_ERR;
    CycleTime = MICROSEC_ERR;
    CntTime = 0;
  } else {
    pps = _pps;
    CycleTime = (1000.0 / (float)_pps) * 1000;
    CntTime = 0;
  }
}

void Motor::InitMot(int _pps, bool _dir)
{
  //まずモーターを止める
  play = STOP;
  Setdir(_dir);
  Setpps(_pps);
}

int Motor::getPps() {
  return pps;
}
bool Motor::getDir() {
  return dir;
}

