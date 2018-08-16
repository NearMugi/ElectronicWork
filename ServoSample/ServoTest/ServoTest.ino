//サーボモーターを動かす
#include "ServoManage.h"
#include <FlexiTimer2.h>

#define PIN_SERVO 4

ServoManage _sv(PIN_SERVO, 500, 2400, -90, 90);

//割り込み周期用(us)
const unsigned int oneloop = 10000;

const unsigned int LOOP_TIME_US = 10000;  //ループ関数の周期(μsec)
int processingTime; //loopの頭から最後までの処理時間

void setup() {
  Serial.begin(115200);

  _sv.init();  
  //シーケンスの初期化
  _sv.initTable();
  //シーケンスをセット
  setSeq();

  //割込み
  FlexiTimer2::set(10, interrupt_loop);
  FlexiTimer2::start();
}

//割り込み処理
void interrupt_loop() {
 _sv.updatePos(oneloop); //割込み周期は固定と考えたほうが安定する
}

void loop() {
  processingTime = micros();

  _sv.readTable();
  
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


void setSeq() {
  unsigned int _size = 5;
  float _table[_size][2] = {
    {-30, 10},  //初期位置
    {-30, 1000},  //キープ
    {-90, 1000},  //開く
    {-90, 2000},  //キープ
    {-30, 1000}, //閉じる
  };
  _sv.setTable(_size, _table, false);
}

