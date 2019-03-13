//Arduinoにアナログスイッチを直接つけてモーターを回す
#include "interval.h"
#include <FlexiTimer2.h>
#include "ShiftRegister.h"
#include "Motor.h"

#define PIN_ON 5  //正回転
#define PIN_ON_RE 4 //逆回転
#define PIN_PPS A5  //PPS


ShiftRegisterManage sr;
Motor mot;
bool isPlay;
bool nowDir;
bool isOn;
bool isOnRe;
int analogPPS;
int pps;

//割り込み周期用(us)
const unsigned int oneloop = 1000;

//割り込み処理
void interrupt_loop() {
  //ppsに則してモーターに送信する値を更新
  //経過時間の算出には固定値を用いる
  bool sw = mot.AddCntTime(oneloop);

  //更新があればOn/Offデータを送る
  if (sw) sr.SendData(((mot.nowPosPtn << 4) | 0x00), 0x00);
}


void setup() {
  Serial.begin(115200);
  pinMode(PIN_ON, INPUT);
  pinMode(PIN_ON_RE, INPUT);

  sr.Init();
  mot.Init(1.25);  //1702 基本ステップ角度

  //割込み(ms)
  FlexiTimer2::set(1, interrupt_loop);

  FlexiTimer2::start();
}

void loop() {
  //10msごとにパラメータをチェックする
  interval<10000>::run([] {
    isPlay = mot.GetStatusPlay();
    nowDir = mot.getDir();

    isOn = digitalRead(PIN_ON);
    isOnRe = digitalRead(PIN_ON_RE);
    analogPPS = analogRead(PIN_PPS);
    pps = map(analogPPS, 1023, 0, mot.PPS_MIN, mot.PPS_MAX);

    if (isPlay) {
      //実行中
      //正or逆回転の場合
      //→向きが異なるなら反映(基本行らない)
      //→向きが同じ場合はPPSを即時反映
      //停止の場合
      //→無条件に止める
      if (isOn) {
        if (!nowDir) {
          mot.Setplay(mot.STOP);
          mot.InitMot(pps, mot.DIR_FORWARD);
          mot.Setplay(mot.PLAY);
        } else {
          mot.Setpps(pps);
        }
      } else if (isOnRe) {
        if (nowDir) {
          mot.Setplay(mot.STOP);
          mot.InitMot(pps, mot.DIR_REVERSE);
          mot.Setplay(mot.PLAY);
        } else {
          mot.Setpps(pps);
        }
      } else {
        mot.Setplay(mot.STOP);
      }
    } else {
      //停止中
      //正or逆回転の場合
      //→反映
      //停止の場合
      //→無条件に止める
      mot.Setplay(mot.STOP);
      if (isOn) {
        mot.InitMot(pps, mot.DIR_FORWARD);
        mot.Setplay(mot.PLAY);
      } else if (isOnRe) {
        mot.InitMot(pps, mot.DIR_REVERSE);
        mot.Setplay(mot.PLAY);
      }
    }

    //debug
#if false    
    String p = "Stop";
    if(isPlay) p = "Play";
    String d = "Forward";
    if(!nowDir) d ="Reverse"; 
    Serial.println("isPlay : " + p + " dir : " + d + " pps : " + String(mot.getPPS()));
#endif
  });
}
