#include "Arduino.h"
#include "PotentioMeter.h"

//PotentioMeter
#define PIN_P1 A0
#define PIN_P2 A1

//今回はベタ
#define P1_MIN 465
#define P1_MAX 570
#define P1_CENTER 522
#define P2_MIN 460
#define P2_MAX 540
#define P2_CENTER 504

PotentioMeterManage _pm1;
PotentioMeterManage _pm2;

const unsigned int LOOP_TIME_US = 50000;  //ループ関数の周期(μsec)
int processingTime; //loopの頭から最後までの処理時間

void setup() {
  Serial.begin(115200);

  _pm1.Port_Init(PIN_P1);
  _pm2.Port_Init(PIN_P2);

}

void loop() {
  processingTime = micros();

  //ステータスに関係なくアナログデータを取得する
  _pm1.Port_Read();
  _pm2.Port_Read();

  loop_pm();

  Serial.print(_pm1.GetdigitalValue_ave());
  Serial.print("  ,  ");
  Serial.println(_pm2.GetdigitalValue_ave());



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

void loop_pm() {
  //ステータスごとに処理を変える。
  //本来キャリブレーションが必要だけど今回は省略
  switch (_pm1.NowStatus) {
    case STATUS_INIT:
      //現状べた書き
      _pm1.SetAnalog_min(P1_MIN);
      _pm1.SetAnalog_max(P1_MAX);
      _pm1.SetAnalog_center(P1_CENTER);

      _pm1.NowStatus = STATUS_ANALYSIS;
      break;

    case STATUS_ANALYSIS:
      _pm1.SetDigitalValue();
      _pm1.SetDigitalValue_ave();
      break;
  }

  switch (_pm2.NowStatus) {
    case STATUS_INIT:
      //現状べた書き
      _pm2.SetAnalog_min(P2_MIN);
      _pm2.SetAnalog_max(P2_MAX);
      _pm2.SetAnalog_center(P2_CENTER);

      _pm2.NowStatus = STATUS_ANALYSIS;
      break;

    case STATUS_ANALYSIS:
      _pm2.SetDigitalValue();
      _pm2.SetDigitalValue_ave();
      break;
  }

}


