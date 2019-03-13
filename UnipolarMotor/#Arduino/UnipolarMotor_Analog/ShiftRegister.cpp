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

void ShiftRegisterManage::SendData(byte b1,byte b2){
  // 送信中のPIN_LATCHはグランド(LOW)レベル
  digitalWrite(PIN_LATCH, LOW);
  // シフト演算を使ってモーターを指定
  shiftOut(PIN_DATA, PIN_CLOCK, LSBFIRST, b2);
  shiftOut(PIN_DATA, PIN_CLOCK, LSBFIRST, b1);
  // 送信終了後PIN_LATCHをHIGHにする
  digitalWrite(PIN_LATCH, HIGH);
}

