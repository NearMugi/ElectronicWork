#include "Arduino.h"
#include "Lump.h"
//#include "LumpPtn.h"
//#include "LumpPtn_2.h"
#include "LumpPtn_3.h"

void LumpManage::SetLumpTable(int no, const int ptn[], int _size)
{
  LumpPtn[no] = new int[_size];
  for (int i = 0; i < _size; i++)
  {
    LumpPtn[no][i] = ptn[i];
  }
}

//initialize
void LumpManage::Init()
{
  //ランプパターンを一つのテーブルにする
  //可変テーブルのため、ここはベタ書き。LEDが増えればその数だけ追加する
  LumpPtn = new int *[LED_CNT];
  int _no = 0;
  LumpPtnSize[_no] = sizeof(ptn_a0) / sizeof(ptn_a0[0]);
  SetLumpTable(_no, ptn_a0, LumpPtnSize[_no]);
  _no++;
  LumpPtnSize[_no] = sizeof(ptn_a1) / sizeof(ptn_a1[0]);
  SetLumpTable(_no, ptn_a1, LumpPtnSize[_no]);
  _no++;
  LumpPtnSize[_no] = sizeof(ptn_a2) / sizeof(ptn_a2[0]);
  SetLumpTable(_no, ptn_a2, LumpPtnSize[_no]);
  _no++;
  LumpPtnSize[_no] = sizeof(ptn_a3) / sizeof(ptn_a3[0]);
  SetLumpTable(_no, ptn_a3, LumpPtnSize[_no]);
  _no++;
  LumpPtnSize[_no] = sizeof(ptn_a4) / sizeof(ptn_a4[0]);
  SetLumpTable(_no, ptn_a4, LumpPtnSize[_no]);
  _no++;
  LumpPtnSize[_no] = sizeof(ptn_a5) / sizeof(ptn_a5[0]);
  SetLumpTable(_no, ptn_a5, LumpPtnSize[_no]);
  _no++;
  LumpPtnSize[_no] = sizeof(ptn_a6) / sizeof(ptn_a6[0]);
  SetLumpTable(_no, ptn_a6, LumpPtnSize[_no]);
  _no++;
  LumpPtnSize[_no] = sizeof(ptn_a7) / sizeof(ptn_a7[0]);
  SetLumpTable(_no, ptn_a7, LumpPtnSize[_no]);
  _no++;
  LumpPtnSize[_no] = sizeof(ptn_a8) / sizeof(ptn_a8[0]);
  SetLumpTable(_no, ptn_a8, LumpPtnSize[_no]);

  //ランプパターンのサイズを取得
  for (int i = 0; i < LED_CNT; i++)
  {
    Lump[i].TABLE_SIZE = LumpPtnSize[i];

    //偶数にならない場合はテーブルに誤りがある
    if (Lump[i].TABLE_SIZE % 2 != 0)
    {
      Serial.print("[LumpManage::Init] LumpPtnTable[");
      Serial.print(i);
      Serial.println("] Data Error!");
      Lump[i].TABLE_SIZE = 0;
    }
    Lump[i].TableNowPos = 0;

    //ランプパターンテーブルをセット
    SetLumpPtn(i);
  }

  // シフトレジスタの個数を設定
  registerSize = 8 * ((LED_CNT - 1) / 8 + 1);

  DutyNowPos = 0;
}
void LumpManage::Update_LumpPtn()
{
  //指定ステップ数に達している場合、次のパターンを取得する
  for (int i = 0; i < LED_CNT; i++)
  {
    if (++Lump[i].NowStep >= Lump[i].TargetStep)
    {
      SetLumpPtn(i);
    }
  }
}

//シフトレジスタに送信するデータを生成、送信
//Serial.printを使うと処理が重くなるので注意！！！
void LumpManage::Update_Duty(ShiftRegisterManage _sh)
{
  int sendData[registerSize];
  int pos = 0;
  int size = LED_CNT;
  for (int i = 0; i < registerSize; i++)
  {
    sendData[i] = 0;
    if (i < LED_CNT)
    {
      sendData[i] = DutyPtn[Lump[i].NowLumpPtn][DutyNowPos];
    }
  }
  // シフトレジスタにデータを渡す
  _sh.SendData(sendData, registerSize);

  if (++DutyNowPos > DUTY_MAX)
    DutyNowPos = 0;
}

//次のランプパターンを取得する
void LumpManage::SetLumpPtn(int i)
{
  //デューティー比を取得する
  Lump[i].NowLumpPtn = LumpPtn[i][Lump[i].TableNowPos];

  //指定ステップ数を取得する　※テーブルサイズを超える場合はエラー
  if (++Lump[i].TableNowPos > Lump[i].TABLE_SIZE)
  {
    //Serial.print(i);
    //Serial.println(" [SetLumpPtn] Size Error");
    Lump[i].TableNowPos = 0;
    Lump[i].NowLumpPtn = 0;
    Lump[i].TargetStep = 0;
    Lump[i].NowStep = 0;
    return;
  }
  Lump[i].TargetStep = LumpPtn[i][Lump[i].TableNowPos];
  Lump[i].NowStep = 0;

  //次の位置に進めておく
  if (++Lump[i].TableNowPos >= Lump[i].TABLE_SIZE)
    Lump[i].TableNowPos = 0;
}
