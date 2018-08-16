#ifndef RS_H
#define RS_H

#define PIN_MOTOR 3
#define PIN_MOTOR_DEBUG 9
#define PULSE_ON HIGH
#define PULSE_OFF LOW

//パルス幅を各モーターで設定するときのタグ
#define MOTOR_RS540  0
#define MOTOR_RS380  1

//周期(us) 20ms
#define PULSE_ONE_LOOP 20000
//パルス幅(μsec)
#define PULSE_RANGE_RS540_MIN 1350
#define PULSE_RANGE_RS540_MAX 1750

#define PULSE_RANGE_RS380_MIN 1350
#define PULSE_RANGE_RS380_MAX 1750

//スピードの設定幅
#define SPEED_RANGE_MIN -100  //逆時計回りのMAX
#define SPEED_RANGE_INIT 0  //
#define SPEED_RANGE_MAX 100   //時計回りのMAX
//1周期ごとに目標スピードに近づけていくときの変化量
//ゼロから最大(最小)値に変化させたとき、安全策として0.5秒かけるようにする
#define SPEED_DELTA 4 //1秒の間に50回割込みがある　→　幅100なので4ずつ変化させる

class rs
{
  public:
    rs();
    void Setup_Init(int _type);
    void Interrupt(int intTime);
    void SetReady();
    void SetTargetSpeed(int _t);

    void Debug_SetTargetSpeed();
    bool CreateSendData_isPlay();
    bool CreateSendData_isOn();
    bool CreateSendData_isNormalRotation();

    bool is_targetSpeed_ZERO();
    int Get_targetSpeed();
    
  private:
    unsigned int ChgSpeedToPulse();
    void SetSpeed();
    volatile bool playOnOff(byte _status, int intTime);
    void pulseOn();
    void pulseOff();
    
    volatile unsigned int _status;
    unsigned int _pulse_range_min;
    unsigned int _pulse_range_max;
    int _nowSpeed;    //現在スピード
    int _targetSpeed; //目標スピード

    volatile bool _isOnePlay;   //1周期終了　※1周期終わってからスピードの設定を行う
    volatile unsigned int _oneTime_on;  //1サイクル中の指定ON時間(us)
    volatile unsigned int _oneTime;  //1サイクル中の経過時間(us)
    volatile bool _isOn;

    volatile unsigned int Debug_OneTime;
    volatile unsigned int Debug_OneTime_On;
};
#endif

