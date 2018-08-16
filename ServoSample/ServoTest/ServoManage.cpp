#include "Arduino.h"
#include "ServoManage.h"

//コンストラクタ
ServoManage::ServoManage(unsigned int _pin, unsigned int _min, unsigned int _max, int _minDegree, int _maxDegree) {
  PIN = _pin;
  PULSE_MIN = _min;
  PULSE_MAX = _max;
  DEGREE_MIN = _minDegree;
  DEGREE_MAX = _maxDegree;
}

ServoManage::init(int _StartDegree) {
  sv.attach(PIN);

  isMove = false;
  Start_Pulse = PULSE_MIN;
  Target_Pulse = PULSE_MIN;
  Length = 0;
  Target_Time = 0;
  Sum_Time = 0;

  
}


ServoManage::setPos(float _Target_Degree, float _Target_Time) {
  Target_Time = _Target_Time * 1000;  //usに変換

  if (_Target_Degree < DEGREE_MIN) _Target_Degree = DEGREE_MIN;
  if (_Target_Degree > DEGREE_MAX) _Target_Degree = DEGREE_MAX;

  Start_Pulse = sv.readMicroseconds();
  float p = (float)(PULSE_MAX - PULSE_MIN) / (DEGREE_MAX - DEGREE_MIN);
  Target_Pulse = (float)((_Target_Degree - DEGREE_MIN ) * p) + PULSE_MIN;
  Length = Target_Pulse - Start_Pulse;  //逆方向であればマイナスになる

  Sum_Time = 0;
  isMove = true;
}

ServoManage::updatePos(unsigned int _intTime) {
  if (!isMove) return;

  Sum_Time += _intTime;
  unsigned int tmpPulse = 0;
  //目標時間に達した場合
  if (Sum_Time >= Target_Time) {
    tmpPulse = Target_Pulse;
    isMove = false;
  } else {
    tmpPulse = Start_Pulse + (float)Length * (Sum_Time / Target_Time);
  }

  if (tmpPulse >= PULSE_MAX) tmpPulse = PULSE_MAX;
  if (tmpPulse <= PULSE_MIN) tmpPulse = PULSE_MIN;
  
  sv.writeMicroseconds(tmpPulse);

}

ServoManage::initTable() {
  float _table[MAX_SIZE][2];
  for (int i = 0; i < MAX_SIZE; i++) {
    _table[i][0] = 0;
    _table[i][1] = 0;
  }
  setTable(0, _table, false);
}

ServoManage::setTable(unsigned int _arraySize, float _table[MAX_SIZE][2], bool _isLoop) {
  arraySize = _arraySize;
  for (int i = 0; i < arraySize; i++) {
    table[i][0] = _table[i][0];
    table[i][1] = _table[i][1];
  }
  isLoop = _isLoop;
  nowPos = 0;
  isEnd = false;
}

ServoManage::readTable() {
  if (isMove) return; //モーター駆動中の場合は更新しない。
  if (isEnd) return; //シーケンス終了の場合は何もしない。
  if (nowPos >= arraySize) return; //テーブルサイズを超えている場合は何もしない。
  
  setPos(table[nowPos][0], table[nowPos][1]);
  nowPos += 1;
  if (nowPos >= arraySize) {
    if(isLoop){
      nowPos = 0;
    } else {
      isEnd = true;
    }
  }
}
