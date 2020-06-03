#ifndef LUMP_H
#define LUMP_H
#include "ShiftRegister.h"

//デューティー比
#define DUTY_MAX 9
const int DutyPtn[11][DUTY_MAX + 1] =
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //  0%
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 10%
        {1, 0, 0, 0, 1, 0, 0, 0, 0, 0}, // 20%
        {1, 0, 0, 0, 1, 0, 0, 0, 1, 0}, // 30%
        {1, 0, 1, 0, 1, 0, 0, 0, 1, 0}, // 40%
        {1, 0, 1, 0, 1, 0, 1, 0, 1, 0}, // 50%
        {1, 1, 1, 0, 1, 0, 1, 0, 1, 0}, // 60%
        {1, 1, 1, 0, 1, 1, 1, 0, 1, 0}, // 70%
        {1, 1, 1, 0, 1, 1, 1, 1, 1, 0}, // 80%
        {1, 1, 1, 0, 1, 1, 1, 1, 1, 1}, // 90%
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, //100%
};

#define LED_CNT 9 //LEDの数

class LumpPtnCls
{
public:
  unsigned int TABLE_SIZE;  //テーブルサイズ
  unsigned int TableNowPos; //現在位置

  unsigned int NowLumpPtn; //現在のデューティー比
  unsigned int NowStep;    //現在のステップ数
  unsigned int TargetStep; //テーブルから取得した指定ステップ数
};

class LumpManage
{
public:
  int **LumpPtn;
  int LumpPtnSize[LED_CNT];
  LumpPtnCls Lump[LED_CNT];

  unsigned int DutyNowPos; //デューティー比テーブルの添え字　ランプパターンに関係なく一定間隔で更新

  void Init(char ptn);
  void Update_LumpPtn();
  void Update_Duty(ShiftRegisterManage _sh);

private:
  int registerSize; //使用するシフトレジスタの個数 * 8
  void AddLumpPtn(const int ptn0[], int size0, const int ptn1[], int size1, const int ptn2[], int size2);
  void SetLumpTable(int no, const int ptn[], int _size);
  void SetLumpPtn(int i);
};

#endif
