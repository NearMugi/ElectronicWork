#include "Arduino.h"
#include "ShiftRegister.h"

//コンストラクタ
ShiftRegisterManage::ShiftRegisterManage() {

}

//initialize
void ShiftRegisterManage::Init() {
  pinMode(PIN_LATCH, OUTPUT);
  pinMode(PIN_CLOCK, OUTPUT);
  pinMode(PIN_DATA, OUTPUT);
}

void ShiftRegisterManage::SendData(byte b){
  // 送信中のPIN_LATCHはグランド(LOW)レベル
  digitalWrite(PIN_LATCH, LOW);
  // シフト演算を使って点灯するパネルを指定
  shiftOut(PIN_DATA, PIN_CLOCK, LSBFIRST, b);
  // 送信終了後PIN_LATCHをHIGHにする
  digitalWrite(PIN_LATCH, HIGH);
}

