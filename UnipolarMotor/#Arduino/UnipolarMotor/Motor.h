#ifndef MOTOR_H
#define MOTOR_H

const bool DIR_FORWARD = true;
const bool DIR_REVERSE = false;

const bool PLAY = true;
const bool STOP = false;

const int PPS_ERR = 0;  //ppsのエラー値
const int PPS_MIN = 1;
const int PPS_MAX = 1000;

const unsigned long  MICROSEC_MIN = (1000 / (float)PPS_MAX) * 1000;
const unsigned long  MICROSEC_MAX = (1000 / (float)PPS_MIN) * 1000;
const unsigned long  MICROSEC_ERR = 0; //1ステップ当りのμsecのエラー値

class Motor
{
  public:
    Motor();  //コンストラクタ
    void Init(float _angle);
    byte nowPosPtn;

    bool AddCntTime(unsigned int _time);

    void SetNextPos();  //次の駆動パターンに更新
    void Setplay(bool sw);  //駆動、停止の指定  ※エラーの場合、駆動しない
    void Setdir(bool sw);   //モーターの方向を指定
    void Setpps(int _pps);  //パルスの指定      ※エラーの場合、エラー値がセットされる

    bool GetStatusReady();  //true…準備完了
    bool GetStatusPlay();   //true…実行中

    void InitMot(int _pps, bool _dir);  //モーターの初期化　返値は1ステップ当りの秒数(μsec)

    int getPps();
    bool getDir();

  private:


    int pps;      //1秒当たりのパルス数
    int angle;    //1ステップ当りの角度
    int cycleCnt; //1回転のステップ数
    volatile unsigned long CycleTime; //1ステップ当りの秒数(μsec)
    volatile bool dir;     //モーターの方向(true…正方向、false…逆方向)

    volatile unsigned long CntTime;   //次の更新までのカウント(μsec)


    //モーターの駆動パターン(2-2相励磁)
    enum POS {None = 0, a0, a1, a2, a3, Terminal};
    const byte PosPtn[6] = {B0000, B1001, B1010, B0110, B0101, B0000}; //最初と最後のデータはエラー回避
    volatile POS nowPos; //パターン指定

    volatile bool play;    //駆動or停止

};



#endif
