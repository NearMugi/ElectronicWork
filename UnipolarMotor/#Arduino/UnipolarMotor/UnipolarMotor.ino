//SPG27-1000シリーズ
//型番・基本ステップ角度・1回転ステップ数
//1203 6 60
//1101 3 120
//1702 1.25 288
//1201 6 60
//1601 3 120
//1701 1.25 288

//#define SAMPLE_PLAY
#define SAMPLE_SEQ
#define MOTOR_CNT 4

#include <FlexiTimer2.h>
#include "ShiftRegister.h"
#include "Motor.h"
#include "Motor_seq.h"

#ifdef SAMPLE_SEQ
#define SEQ_CNT 5 //シーケンスの数
int seqNo;
Motor_seq *seq[SEQ_CNT];
#endif

#define PIN_SW 2
#define PIN_VOLT_1 3  //電力供給1
#define PIN_VOLT_2 5  //電力供給2

bool isSwOn;

ShiftRegisterManage sr;
Motor *mot = new Motor[MOTOR_CNT];

//割り込み周期用(us)
const unsigned int oneloop = 1000;

const unsigned int LOOP_TIME_US = 10000;  //ループ関数の周期(μsec)
int processingTime; //loopの頭から最後までの処理時間

//モーターの位置を指定する　※モーターを2個ずつ設定
byte SetPos_mot12() {
  byte b = 0x00;
  b = (mot[0].nowPosPtn << 4) | mot[1].nowPosPtn;
  return b;
}
byte SetPos_mot34() {
  byte b = 0x00;
  b = (mot[2].nowPosPtn << 4) | mot[3].nowPosPtn;
  return b;
}

void setup() {
  Serial.begin(115200);
  sr.Init();

  mot[0].Init(3);
  mot[1].Init(3);
  mot[2].Init(3);
  mot[3].Init(3);

  //割込み
  FlexiTimer2::set(1, interrupt_loop);
  FlexiTimer2::start();

  pinMode(PIN_SW, INPUT);
  pinMode(PIN_VOLT_1, OUTPUT);
  pinMode(PIN_VOLT_2, OUTPUT);

  digitalWrite(PIN_VOLT_1, true);
  digitalWrite(PIN_VOLT_2, true);

  isSwOn = false;

#ifdef SAMPLE_PLAY
  mot[0].InitMot(200, false);
  mot[1].InitMot(100, false);
  mot[2].InitMot(300, true);
  mot[3].InitMot(100, false);

  mot[0].Setplay(STOP);
  mot[1].Setplay(STOP);
  mot[2].Setplay(STOP);
  mot[3].Setplay(PLAY);
#endif

#ifdef SAMPLE_SEQ
  mot[0].InitMot(PPS_MIN, true);
  mot[1].InitMot(PPS_MIN, true);
  mot[2].InitMot(PPS_MIN, true);
  mot[3].InitMot(PPS_MIN, true);
  mot[0].Setplay(PLAY);
  mot[1].Setplay(PLAY);
  mot[2].Setplay(PLAY);
  mot[3].Setplay(PLAY);

  settingSeq();
#endif

}

//割り込み処理
void interrupt_loop() {
  //ppsに則してモーターに送信する値を更新
  //経過時間の算出には固定値を用いる
  bool sw1 = mot[0].AddCntTime(oneloop);
  bool sw2 = mot[1].AddCntTime(oneloop);
  bool sw3 = mot[2].AddCntTime(oneloop);
  bool sw4 = mot[3].AddCntTime(oneloop);
  //Serial.println(sw2);

  //更新があればOn/Offデータを送る
  if (sw1 || sw2 || sw3 || sw4) {
    sr.SendData(SetPos_mot12(), SetPos_mot34());
  }
}

void loop() {
  processingTime = micros();

#ifdef SAMPLE_SEQ

  if (Serial.available())
  {
    int i = Serial.read() - '0';
    if (0 <= i && i < SEQ_CNT) {
      isSwOn = true;
      seqNo = i;
      restartSeq();
    } else {
      isSwOn = false;
      seqNo = 0;
    }
  }

  String s = "";
  if (isSwOn) {
    s = "SW ON";
    updateMotor();
  } else {
    s = "SW OFF";
    keepMotor();
  }

  s += "\t";
  s += seqNo;
  switch (seqNo) {
    case 0:
      s += " 全てキープ";
      break;
    case 1:
      s += " 初期位置";
      break;
    case 2:
      s += " メイン演出";
      break;
    case 3:
      s += " メイン演出２";
      break;
    case 4:
      s += " 走るだけ実行";
      break;
  }
  s += "\t";
  s += mot[0].getPps();
  s += "\t";
  s += mot[1].getPps();
  s += "\t";
  s += mot[2].getPps();
  s += "\t";
  s += mot[3].getPps();
  Serial.println(s);
#endif

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

#ifdef SAMPLE_SEQ
void settingSeq() {
  //moter1 上下
  //moter2 傾き
  //moter3 左右
  //moter4 走る


  seqNo = 0;
  for (int i = 0; i < SEQ_CNT; i++) {
    seq[i] = new Motor_seq[MOTOR_CNT];
  }

  int _tmpNo = 0;
  //seq0 init
  seq[_tmpNo][0].init(0, false);
  seq[_tmpNo][1].init(0, false);
  seq[_tmpNo][2].init(0, false);
  seq[_tmpNo][3].init(0, false);

  //seq1 init position
  _tmpNo = 1;
  seq[_tmpNo][0].init(6, false);
  seq[_tmpNo][0].setPtn(PPS_ERR, 100, true);
  seq[_tmpNo][0].setPtn(5, 5, false);
  seq[_tmpNo][0].setPtn(9, 5, false);
  seq[_tmpNo][0].setPtn(18, 100, false);
  seq[_tmpNo][0].setPtn(30, 180, false);
  seq[_tmpNo][0].setPtn(1, 10000, false);

  seq[_tmpNo][1].init(0, false);

  seq[_tmpNo][2].init(2, false);
  seq[_tmpNo][2].setPtn(150, 100, true);
  seq[_tmpNo][2].setPtn(PPS_ERR, 1, true);

  seq[_tmpNo][3].init(0, false);


  //seq2 main
  _tmpNo = 2;
  seq[_tmpNo][0].init(8, true);
  seq[_tmpNo][0].setPtn(5, 10, true);
  seq[_tmpNo][0].setPtn(9, 20, true);
  seq[_tmpNo][0].setPtn(18, 60, true);
  seq[_tmpNo][0].setPtn(5, 10, true);

  seq[_tmpNo][0].setPtn(5, 10, false);
  seq[_tmpNo][0].setPtn(9, 20, false);
  seq[_tmpNo][0].setPtn(18, 60, false);
  seq[_tmpNo][0].setPtn(5, 10, false);

  seq[_tmpNo][1].init(0, true);

  seq[_tmpNo][2].init(2, true);
  seq[_tmpNo][2].setPtn(100, 100, true);
  seq[_tmpNo][2].setPtn(100, 100, false);

  seq[_tmpNo][3].init(1, true);
  seq[_tmpNo][3].setPtn(300, 1000000, false);


  //seq3 main2
  _tmpNo = 3;
  seq[_tmpNo][0].init(4, false);
  seq[_tmpNo][0].setPtn(5, 10, false);
  seq[_tmpNo][0].setPtn(9, 20, false);
  seq[_tmpNo][0].setPtn(18, 60, false);
  seq[_tmpNo][0].setPtn(30, 100, false);

  seq[_tmpNo][1].init(2, false);
  seq[_tmpNo][1].setPtn(PPS_MIN, 50, true);  
  seq[_tmpNo][1].setPtn(100, 40, true);

  seq[_tmpNo][2].init(1, false);
  seq[_tmpNo][2].setPtn(130, 100, true);

  seq[_tmpNo][3].init(3, true);
  seq[_tmpNo][3].setPtn(PPS_MIN, 100, false);
  seq[_tmpNo][3].setPtn(400, 1000000, false);


  //seq4 reset
  _tmpNo = 4;
  seq[_tmpNo][0].init(0, false);
  seq[_tmpNo][1].init(0, false);
  seq[_tmpNo][2].init(0, false);
  seq[_tmpNo][3].init(1, true);
  seq[_tmpNo][3].setPtn(100, 1000000, false);

}

void restartSeq() {
  for (int i = 0; i < MOTOR_CNT; i++) {
    seq[seqNo][i].reset();
  }
}

void updateMotor() {
  for (int i = 0; i < MOTOR_CNT; i++) {
    //シーケンステーブルから情報が取れる場合、その値を使う
    if (seq[seqNo][i].chkSeqExist()) {
      seq[seqNo][i].updatePtn();
      int _pps = seq[seqNo][i].getPps();
      if ( mot[i].getPps() != _pps) {
        mot[i].Setpps(_pps);
      }
      int _dir = seq[seqNo][i].getDir();
      if (mot[i].getDir() != _dir) {
        mot[i].Setdir(_dir);
      }

    } else {
      mot[i].Setpps(PPS_MIN);
    }
  }
}

void keepMotor() {
  for (int i = 0; i < MOTOR_CNT; i++) {
    mot[i].Setpps(PPS_MIN);
  }
}

#endif


