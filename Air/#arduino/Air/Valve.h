#ifndef VALVE_H
#define VALVE_H

#define VALVE 9 //電磁弁のピン番号

#define VALVE_ON HIGH
#define VALVE_OFF LOW

#define VALVE_CONTINUETIME 10000000 //バルブの連続可動時間(us) 10秒

class Valve
{
  public:
    void Init();
    void Set_isPlay(bool _sw);
    void UpdateOnOff(int intTime);
    void ValveInit();

    bool Get_isEnablePlay();
    bool Get_isValveOpen();
    bool Get_isValveOneloopEnd();

    //設定した値を保存する変数
    volatile int _set_cycleCnt;  //1サイクルを実行する回数
    volatile unsigned long _set_oneTime;   //1サイクルの時間(us)
    volatile unsigned long _set_oneTime_on;//1サイクルのうちON時間(us)

  private:

    //実行中に使用する変数
    volatile int _done_cycleCnt;   //1サイクルを実行した回数
    volatile unsigned long _time_valve_on; //電磁弁がON状態の時間(us)

    volatile unsigned long _chkTime_valve;  //電磁弁がONになり続けていないかチェックする
    volatile bool isEnablePlay;
    volatile bool isValveOpen;
    volatile bool isValveOneloopEnd;


};

#endif
