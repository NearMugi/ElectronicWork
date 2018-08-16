#ifndef MOTOR_SEQ_H
#define MOTOR_SEQ_H
#include "Motor.h"

class unitptn
{
    int pps;  //pps
    long frm;  //指定したppsを実行するフレーム数
    bool dir;  //向き

  public:
    ptn() {};
    void setPps(int _pps) {
      pps = _pps;
    }
    void setFrm(long _frm) {
      frm = _frm;
    }
    void setDir(bool _dir) {
      dir = _dir;
    }
    int getPps() {
      return pps;
    }
    long getFrm() {
      return frm;
    }
    bool getDir() {
      return dir;
    }
};

class Motor_seq
{
  public:
    Motor_seq();
    void init(int _tableSize, bool _isLoop);
    void setPtn(int _pps, long _frm, bool _dir);
    void updatePtn();
    void reset();
    int getPps();
    bool getDir();
    bool chkSeqExist();
  private:
    unitptn *ptn;
    int tableSize;

    //シーケンス実行時に使用する変数
    int tablepos;
    long frmCnt;
    bool isLoop;
    bool isEnd;

    //モーターに指定する値
    int nowPps;
    long nowFrm;
    bool nowDir;

    int _addNo;  //ptn追加時の添え字
};

#endif
