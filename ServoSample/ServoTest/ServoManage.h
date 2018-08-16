#ifndef SERVO_MANAGE_H
#define SERVO_MANAGE_H
#include<Servo.h>
class ServoManage
{
  public:
    ServoManage(unsigned int _pin, unsigned int _min, unsigned int _max, int _minDegree, int _maxDegree);
    init(int _StartDegree);

    setPos(float _Target_Degree, float _Target_Time);  //目標角度(度)、目標時間(ms)
    updatePos(unsigned int _intTime);

    //テーブルでシーケンスを管理
    initTable();
    setTable(unsigned int _arraySize, float _table[20][2], bool _isLoop);
    readTable();
    
  private:
    unsigned int PIN;
    volatile unsigned int PULSE_MIN;
    volatile unsigned int PULSE_MAX;
    volatile int DEGREE_MIN;
    volatile int DEGREE_MAX;
    volatile Servo sv;
    
    volatile bool isMove;
    volatile unsigned int Start_Pulse;   //開始地点(サーボのパルス値)
    volatile unsigned int Target_Pulse;  //目標地点(サーボのパルス値)
    volatile int Length;                 //目標地点までの移動距離(パルス値ベース)　※マイナス値もあり得る
    volatile float Target_Time;  //目標時間(us)
    volatile float Sum_Time;     //累計経過時間(us)

    //テーブルでシーケンス制御
    static const unsigned int MAX_SIZE = 20;
    bool isEnd;
    bool isLoop;
    int arraySize;
    int nowPos;

    float table[MAX_SIZE][2];//[n][0]目標角度(度)、[n][1]目標時間(ms)
    
};





#endif

