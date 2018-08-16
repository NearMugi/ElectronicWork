//シフトレジスタを用いてパルス制御を行うサンプル
#include <FlexiTimer2.h>
#include "ShiftRegister.h"
#include "Lump.h"
ShiftRegisterManage _sh;
LumpManage _lmp;

const unsigned int LOOP_TIME_US = 1000;  //ループ関数の周期(μsec)
int processingTime; //loopの頭から最後までの処理時間

void setup() {
  Serial.begin(115200);
  
  _sh.Init();
  _lmp.Init();

  FlexiTimer2::set(10, interrupt_loop);
  FlexiTimer2::start();
  
}

//割り込み処理
void interrupt_loop() {
  _lmp.Update_LumpPtn();
}

void loop() {
  processingTime = micros();
  
    //On/Offデータを送る
  _lmp.Update_Duty(_sh);


  //一連の処理にかかった時間を考慮して待ち時間を設定する
  wait_ConstantLoop();
}

void wait_ConstantLoop() {
  processingTime = micros() - processingTime;
  long loopWaitTime = LOOP_TIME_US - processingTime;
  
  if (loopWaitTime < 0)  return;

   long start_time = micros();
   while ( micros() - start_time < loopWaitTime) {};
}

