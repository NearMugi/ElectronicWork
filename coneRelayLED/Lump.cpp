#include "Arduino.h"
#include "Lump.h"
#include "LumpPtn.h"

void LumpManage::SetLumpTable(int no, const int ptn[], int _size)
{
  LumpPtn[no] = new int[_size];
  for (int i = 0; i < _size; i++)
  {
    LumpPtn[no][i] = ptn[i];
  }
}

void LumpManage::AddLumpPtn(const int ptn0[], int size0, const int ptn1[], int size1, const int ptn2[], int size2)
{
  LumpPtn = new int *[LED_CNT];
  int _no = 0;
  LumpPtnSize[_no] = size0;
  SetLumpTable(_no, ptn0, LumpPtnSize[_no]);
  _no++;
  LumpPtnSize[_no] = size0;
  SetLumpTable(_no, ptn0, LumpPtnSize[_no]);
  _no++;
  LumpPtnSize[_no] = size0;
  SetLumpTable(_no, ptn0, LumpPtnSize[_no]);

  _no++;
  LumpPtnSize[_no] = size1;
  SetLumpTable(_no, ptn1, LumpPtnSize[_no]);
  _no++;
  LumpPtnSize[_no] = size1;
  SetLumpTable(_no, ptn1, LumpPtnSize[_no]);
  _no++;
  LumpPtnSize[_no] = size1;
  SetLumpTable(_no, ptn1, LumpPtnSize[_no]);

  _no++;
  LumpPtnSize[_no] = size2;
  SetLumpTable(_no, ptn2, LumpPtnSize[_no]);
  _no++;
  LumpPtnSize[_no] = size2;
  SetLumpTable(_no, ptn2, LumpPtnSize[_no]);
  _no++;
  LumpPtnSize[_no] = size2;
  SetLumpTable(_no, ptn2, LumpPtnSize[_no]);
}

//initialize
void LumpManage::Init(char ptn)
{
  //ランプパターンを一つのテーブルにする
  //可変テーブルのため、ここはベタ書き。LEDが増えればその数だけ追加する
  //基板の系統数の関係でLED3つとも同じパターンを設定する
  bool isSet = true;
  switch (ptn)
  {
  case '1':
    AddLumpPtn(ptn_a0, sizeof(ptn_a0) / sizeof(ptn_a0[0]),
               ptn_a1, sizeof(ptn_a1) / sizeof(ptn_a1[0]),
               ptn_a2, sizeof(ptn_a2) / sizeof(ptn_a2[0]));
    break;
  case '2':
    AddLumpPtn(ptn_b0, sizeof(ptn_b0) / sizeof(ptn_b0[0]),
               ptn_b1, sizeof(ptn_b1) / sizeof(ptn_b1[0]),
               ptn_b2, sizeof(ptn_b2) / sizeof(ptn_b2[0]));
    break;
  case '3':
    AddLumpPtn(ptn_c0, sizeof(ptn_c0) / sizeof(ptn_c0[0]),
               ptn_c1, sizeof(ptn_c1) / sizeof(ptn_c1[0]),
               ptn_c2, sizeof(ptn_c2) / sizeof(ptn_c2[0]));
    break;
  case '4':
    AddLumpPtn(ptn_d0, sizeof(ptn_d0) / sizeof(ptn_d0[0]),
               ptn_d1, sizeof(ptn_d1) / sizeof(ptn_d1[0]),
               ptn_d2, sizeof(ptn_d2) / sizeof(ptn_d2[0]));
    break;
  case '5':
    AddLumpPtn(ptn_e0, sizeof(ptn_e0) / sizeof(ptn_e0[0]),
               ptn_e1, sizeof(ptn_e1) / sizeof(ptn_e1[0]),
               ptn_e2, sizeof(ptn_e2) / sizeof(ptn_e2[0]));
    break;
  case '6':
    AddLumpPtn(ptn_f0, sizeof(ptn_f0) / sizeof(ptn_f0[0]),
               ptn_f1, sizeof(ptn_f1) / sizeof(ptn_f1[0]),
               ptn_f2, sizeof(ptn_f2) / sizeof(ptn_f2[0]));
    break;
  case '7':
    AddLumpPtn(ptn_g0, sizeof(ptn_g0) / sizeof(ptn_g0[0]),
               ptn_g1, sizeof(ptn_g1) / sizeof(ptn_g1[0]),
               ptn_g2, sizeof(ptn_g2) / sizeof(ptn_g2[0]));
    break;
  case '8':
    AddLumpPtn(ptn_h0, sizeof(ptn_h0) / sizeof(ptn_h0[0]),
               ptn_h1, sizeof(ptn_h1) / sizeof(ptn_h1[0]),
               ptn_h2, sizeof(ptn_h2) / sizeof(ptn_h2[0]));
    break;
  case '9':
    AddLumpPtn(ptn_i0, sizeof(ptn_i0) / sizeof(ptn_i0[0]),
               ptn_i1, sizeof(ptn_i1) / sizeof(ptn_i1[0]),
               ptn_i2, sizeof(ptn_i2) / sizeof(ptn_i2[0]));
    break;
  case '0':
    AddLumpPtn(ptn_j0, sizeof(ptn_j0) / sizeof(ptn_j0[0]),
               ptn_j1, sizeof(ptn_j1) / sizeof(ptn_j1[0]),
               ptn_j2, sizeof(ptn_j2) / sizeof(ptn_j2[0]));
    break;
  default:
    isSet = false;
    break;
  }
  if (!isSet)
    return;
  Serial.print("[LumpManage::Init] LumpPtn :");
  Serial.println(ptn);

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
