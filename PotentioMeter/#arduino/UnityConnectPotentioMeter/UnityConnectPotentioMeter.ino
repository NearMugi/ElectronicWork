//Arduino <-> Unity Connect
#include "ConnectUnityManage.h"
#include <FlexiTimer2.h>
#include "PotentioMeter.h"
//+++設定++++++++++++++++++++++++++++++
//baudRate = 115200
//endPoint = "\t"
//splitPoint = ','
//++++++++++++++++++++++++++++++++++++
ConnectUnityManage con;

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

//++++++++++++++++++++++++++
//Command
//++++++++++++++++++++++++++
#define CMD_A0 0xA0 //
#define CMD_80 0x80 //
#define CMD_B0 0xB0 //
#define CMD_B1 0xB1 //
#define CMD_B2 0xB2 //
#define CMD_B3 0xB3 //
#define CMD_B4 0xB4 //


//SendData(One Byte)
struct sendCmd {
  bool flg_7 : 1; //
  bool flg_6 : 1; //
  bool flg_5 : 1; //
  bool flg_4 : 1; //
  bool flg_3 : 1; //
  bool flg_2 : 1; //
  bool flg_1 : 1; //
  bool flg_0 : 1;
};
struct sendCmd SendCmd_Info;

const unsigned int LOOP_TIME_US = 100000;  //ループ関数の周期(μsec)
int processingTime; //loopの頭から最後までの処理時間

void setup() {
  con.Init();

  _pm1.Port_Init(PIN_P1);
  _pm2.Port_Init(PIN_P2);

}


void loop() {
  processingTime = micros();

  //ステータスに関係なくアナログデータを取得する
  _pm1.Port_Read();
  _pm2.Port_Read();

  loop_pm();

  //データを受信
  //[echo]送信データをセットする
  //[command]コマンドに分ける
  //[continuous]ストックする
  con.GetReceiveData();

  //受信データを解析
  //[echo]何もしない
  //[command]コマンドを判別して必要な処理を行う
  //[continuous]ストックしたデータを処理する
  ChkReceiveData();


  //送信データを生成、送信
  SetSendData();

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

//+++++++++++++++++++++++++++++++++++++++++++++++++++
//コマンドや連続データの処理は各プロジェクトで異なるため、
//ライブラリーの外に定義している。
//+++++++++++++++++++++++++++++++++++++++++++++++++++

//受信データを解析
void ChkReceiveData() {
  Update_Command(con.OneSetCmd, con.ReceiveCmd);
}

//送信データを生成
void SetSendData() {
  //P1データを送信
  CreateCmd(false, _pm1.GetdigitalValue_ave());
  //P2データを送信
  CreateCmd(true, _pm2.GetdigitalValue_ave());
}

void CreateCmd(bool p, float v) {
  //---1バイト目---
  //0ビット～4ビットを見て1バイト目のデータだと判断する
  //flg_7 : true
  //flg_6 : P1(false) or P2(true)
  //flg_5 : プラス(false) or マイナス(true)
  //flg_4～_0 : true

  //---2バイト目---
  //flg_7 : false
  //flg_6～_0 : 整数(0～99)

  //---3バイト目---
  //flg_7 : false
  //flg_6～_0 : 小数(0～99)


  con.sendData = "";

  //ヘッダー
  SendCmd_Info.flg_7 = true;
  SendCmd_Info.flg_6 = p;
  if (v >= 0) {
    SendCmd_Info.flg_5 = false;
  } else {
    SendCmd_Info.flg_5 = true;
  }
  SendCmd_Info.flg_4 = true;
  SendCmd_Info.flg_3 = true;
  SendCmd_Info.flg_2 = true;
  SendCmd_Info.flg_1 = true;
  SendCmd_Info.flg_0 = true;

  con.sendData += GetSendCmd_Status();
  con.sendData += ",";

  //整数部分
  int b[7] = {0, 0, 0, 0, 0, 0, 0};
  int i = 0;
  int d = (int)abs(v);
  while (d > 0) {
    b[i++] = d % 2;
    d = d / 2;
  }
  SendCmd_Info.flg_7 = false;
  SendCmd_Info.flg_6 = b[6];
  SendCmd_Info.flg_5 = b[5];
  SendCmd_Info.flg_4 = b[4];
  SendCmd_Info.flg_3 = b[3];
  SendCmd_Info.flg_2 = b[2];
  SendCmd_Info.flg_1 = b[1];
  SendCmd_Info.flg_0 = b[0];

  con.sendData += GetSendCmd_Status();
  con.sendData += ",";


  //小数部分
  b[0] = 0;
  b[1] = 0;
  b[2] = 0;
  b[3] = 0;
  b[4] = 0;
  b[5] = 0;
  b[6] = 0;
  b[7] = 0;

  i = 0;
  v = abs(v);
  d = (int)((v - (int)v) * 100);  //小数部分だけを抜き出している。

  while (d > 0) {
    b[i++] = d % 2;
    d = d / 2;
  }
  SendCmd_Info.flg_7 = false;
  SendCmd_Info.flg_6 = b[6];
  SendCmd_Info.flg_5 = b[5];
  SendCmd_Info.flg_4 = b[4];
  SendCmd_Info.flg_3 = b[3];
  SendCmd_Info.flg_2 = b[2];
  SendCmd_Info.flg_1 = b[1];
  SendCmd_Info.flg_0 = b[0];

  con.sendData += GetSendCmd_Status();
  con.sendData += "\t";

  //生成したコマンドを送信
  con.Send();
}


//送信コマンドの生成　SendCmd_Infoを1バイト＋終端文字に変換する
String GetSendCmd_Status() {
  byte _c = (byte)((SendCmd_Info.flg_7 << 7) |
                   (SendCmd_Info.flg_6 << 6) |
                   (SendCmd_Info.flg_5 << 5) |
                   (SendCmd_Info.flg_4 << 4) |
                   (SendCmd_Info.flg_3 << 3) |
                   (SendCmd_Info.flg_2 << 2) |
                   (SendCmd_Info.flg_1 << 1) |
                   (SendCmd_Info.flg_0)
                  );
  return String(_c);
}

//[CommandType] procceing Receive Data
//各プロジェクトで異なる
void Update_Command(int size, byte rCmd[][3]) {

  byte cmd_main;
  byte cmd_sub1;
  byte cmd_sub2;
  //+++++++++++++++++++++++++++
  for (int i = 0; i < size; i++) {
    cmd_main = rCmd[i][0];
    cmd_sub1 = rCmd[i][1];
    cmd_sub2 = rCmd[i][2];

    switch (cmd_main) {
      //--------------------
      case CMD_A0://Start
        switch (cmd_sub2) {
          case 0x00:
            break;
          case 0x01:
            break;
        }
        break;

      //--------------------
      case CMD_80://Stop
        switch (cmd_sub2) {
          case 0x00:
            break;
          case 0x01:
            break;
        }
        break;

    }
    //これがないとReceiveCmdを初期化できない！
    con.ReceiveCmd[i][0] = (byte)0;
    con.ReceiveCmd[i][1] = (byte)0;
    con.ReceiveCmd[i][2] = (byte)0;
  }


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


