#include "Arduino.h"
#include "Motor_seq.h"

Motor_seq::Motor_seq() {
  tableSize = 0;
}

void Motor_seq::init(int _tableSize, bool _isLoop) {
  tableSize = _tableSize;
  if(tableSize > 0) ptn = new unitptn[tableSize];
  _addNo = 0;
  nowPps = 0;
  nowFrm = 0;
  nowDir = false;
  tablepos = 0;
  frmCnt = 0;
  isEnd = false;
  isLoop = _isLoop;
}

void Motor_seq::setPtn(int _pps, long _frm, bool _dir) {
  if (_addNo >= tableSize) return;
  ptn[_addNo].setPps(_pps);
  ptn[_addNo].setFrm(_frm);
  ptn[_addNo].setDir(_dir);
  _addNo++;
}

void Motor_seq::updatePtn() {
  if (tableSize <= 0) return;
  if (isEnd) return;

  nowPps = ptn[tablepos].getPps();
  nowFrm = ptn[tablepos].getFrm();
  nowDir = ptn[tablepos].getDir();


  //次の処理のために変数を更新
  frmCnt++;
  if (frmCnt > nowFrm) {
    tablepos++;
    frmCnt = 0;
  }

  //全てのシーケンスを実行した後は頭出しorシーケンスを止める
  if (tablepos >= tableSize) {
    if (isLoop) {
      tablepos = 0;
      frmCnt = 0;
    } else {
      isEnd = true;
    }
  }
}

//シーケンスが切り替わった際に実行
void Motor_seq::reset(){
  nowPps = 0;
  nowFrm = 0;
  nowDir = false;
  tablepos = 0;
  frmCnt = 0;
  isEnd = false;  
}

int Motor_seq::getPps() {
  return nowPps;
}
bool Motor_seq::getDir() {
  return nowDir;
}

//シーケンスを読み込めるかチェックする
bool Motor_seq::chkSeqExist() {
  if(tableSize <= 0) return false;
  if(isEnd) return false;
  return true;
  
}

