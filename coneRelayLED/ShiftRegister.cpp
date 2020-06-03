#include "Arduino.h"
#include "ShiftRegister.h"

//コンストラクタ
ShiftRegisterManage::ShiftRegisterManage()
{
}

//initialize
void ShiftRegisterManage::Init()
{
  pinMode(PIN_LATCH, OUTPUT);
  pinMode(PIN_CLOCK, OUTPUT);
  pinMode(PIN_DATA, OUTPUT);
}

void ShiftRegisterManage::SendData(int b[], int sendDataSize)
{
  // 送信中のPIN_LATCHはグランド(LOW)レベル
  digitalWrite(PIN_LATCH, LOW);
  // シフト演算を使って点灯するパネルを指定
  for (int i = sendDataSize; i >= 0; i--)
  {
    //Serial.print(b[i]);
    digitalWrite(PIN_DATA, b[i]);
    digitalWrite(PIN_CLOCK, HIGH);
    digitalWrite(PIN_CLOCK, LOW);
  }
  // 送信終了後PIN_LATCHをHIGHにする
  digitalWrite(PIN_LATCH, HIGH);
  //Serial.println("");
}
