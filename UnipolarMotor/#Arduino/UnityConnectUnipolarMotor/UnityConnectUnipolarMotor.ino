//Arduino <-> Unity Connect
#include "ConnectUnityManage.h"
#include <FlexiTimer2.h>
#include "ShiftRegister.h"
#include "Motor.h"
//+++設定++++++++++++++++++++++++++++++
//baudRate = 115200
//endPoint = "\t"
//splitPoint = ','
//++++++++++++++++++++++++++++++++++++
ConnectUnityManage con;

#define PIN_LED 13  //デバッグ用のLチカ
#define PIN_VOLT_1 2  //電力供給1
#define PIN_VOLT_2 3  //電力供給2

//++++++++++++++++++++++++++
//Command
//++++++++++++++++++++++++++
#define CMD_A0 0xA0 //実行 0x0000～0x0003　モーター1～4
#define CMD_80 0x80 //停止 0x0000～0x0003　モーター1～4
#define CMD_B0 0xB0 //0x0000～0xFFFF　pps
#define CMD_B1 0xB1 //0x0000　正方向・0x0001　逆方向
#define CMD_B2 0xB2 //0x0000　モーター１に指定したpps、方向を設定　※モーターは停止する
//0x0001　モーター２に～
#define CMD_B3 0xB3 //0x0000～0xFFFF　モーター１に指定したppsを設定　※モーターは停止しない
#define CMD_B4 0xB4 //0x0000～0xFFFF　モーター２に指定したppsを設定　※モーターは停止しない
#define CMD_B5 0xB5 //0x0000～0xFFFF　モーター３に指定したppsを設定　※モーターは停止しない
#define CMD_B6 0xB6 //0x0000～0xFFFF　モーター４に指定したppsを設定　※モーターは停止しない


//SendData(One Byte)
struct sendCmd {
  bool flg_7 : 1; //
  bool flg_6 : 1; //
  bool flg_5 : 1; //
  bool flg_4 : 1; //
  bool flg_3 : 1;
  bool flg_2 : 1; //true…準備OK、false…NG
  bool flg_1 : 1; //true…開始、false…停止
  bool flg_0 : 1;
};
struct sendCmd SendCmd_Info;

int tmp_pps = 0;  //コマンドより取得した、設定予定のpps
bool tmp_dir = true; //コマンドより取得した、設定予定の方向

ShiftRegisterManage sr;
Motor mot1;
Motor mot2;
Motor mot3;
Motor mot4;

//割り込み周期用(us)
const unsigned int oneloop = 1000;

const unsigned int LOOP_TIME_US = 10000;  //ループ関数の周期(μsec) ※ループが早すぎるとUnity側の取得に時間がかかる。(データ量が多すぎる？)
int processingTime; //loopの頭から最後までの処理時間

//モーターの位置を指定する　※モーターを2個ずつ設定
byte SetPos_mot12() {
  byte b = 0x00;
  b = (mot1.nowPosPtn << 4) | mot2.nowPosPtn;
  return b;
}
byte SetPos_mot34() {
  byte b = 0x00;
  b = (mot3.nowPosPtn << 4) | mot4.nowPosPtn;
  return b;
}

void InitSendCmd_Info(){
  SendCmd_Info.flg_7 = false;
  SendCmd_Info.flg_6 = false;
  SendCmd_Info.flg_5 = false;
  SendCmd_Info.flg_4 = false;
  SendCmd_Info.flg_3 = false;
  SendCmd_Info.flg_2 = false;
  SendCmd_Info.flg_1 = false;
  SendCmd_Info.flg_0 = false;  
}

void setup() {
  con.Init();
  sr.Init();

  InitSendCmd_Info();
  
  mot1.Init(3);
  mot2.Init(3);
  mot3.Init(3);
  mot4.Init(3);

  //割込み
  FlexiTimer2::set(1, interrupt_loop);
  FlexiTimer2::start();

  pinMode(PIN_LED,OUTPUT);
  digitalWrite(PIN_LED,LOW);

  pinMode(PIN_VOLT_1,OUTPUT);
  pinMode(PIN_VOLT_2,OUTPUT);

  digitalWrite(PIN_VOLT_1,true);
  digitalWrite(PIN_VOLT_2,true);

}

//割り込み処理
void interrupt_loop() {
  //ppsに則してモーターに送信する値を更新
  //経過時間の算出には固定値を用いる
  bool sw1 = mot1.AddCntTime(oneloop);
  bool sw2 = mot2.AddCntTime(oneloop);
  bool sw3 = mot3.AddCntTime(oneloop);
  bool sw4 = mot4.AddCntTime(oneloop);

  //更新があればOn/Offデータを送る
  if (sw1 || sw2 || sw3 || sw4) sr.SendData(SetPos_mot12(),SetPos_mot34());
}

void loop() {
  processingTime = micros();

  //データを受信
  con.GetReceiveData();

  //受信データを解析
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
  con.sendData = "";
  
  //---1バイト目---
  //ヘッダー
  InitSendCmd_Info();
  SendCmd_Info.flg_7 = true;
  SendCmd_Info.flg_0 = true;  
  con.sendData += GetSendCmd_Status();
  con.sendData += ",";
  
  //---2バイト目---
  //モーターのステータス
  InitSendCmd_Info();
  
  SendCmd_Info.flg_7 = mot1.GetStatusReady();
  SendCmd_Info.flg_6 = mot1.GetStatusPlay();
  SendCmd_Info.flg_5 = mot2.GetStatusReady();
  SendCmd_Info.flg_4 = mot2.GetStatusPlay();
  SendCmd_Info.flg_3 = mot3.GetStatusReady();
  SendCmd_Info.flg_2 = mot3.GetStatusPlay();
  SendCmd_Info.flg_1 = mot4.GetStatusReady();
  SendCmd_Info.flg_0 = mot4.GetStatusPlay();

  con.sendData += GetSendCmd_Status();
  con.sendData += "\t";
  //生成したコマンドを送信
  con.Send();
}



//送信コマンドの生成　SendCmd_Infoを1バイトに変換する
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
  //※送信される順番は決まっている。
  byte cmd_main;
  byte cmd_sub1;
  byte cmd_sub2;
  //+++++++++++++++++++++++++++
  for (int i = 0; i < size; i++) {
    cmd_main = rCmd[i][0];
    cmd_sub1 = rCmd[i][1];
    cmd_sub2 = rCmd[i][2];

    switch (cmd_main) {
      case CMD_A0://実行
        switch (cmd_sub2) {
          case 0x00:
            mot1.Setplay(mot1.PLAY);
            break;
          case 0x01:
            mot2.Setplay(mot2.PLAY);
            break;
          case 0x02:
            mot3.Setplay(mot3.PLAY);
            break;
          case 0x03:
            mot4.Setplay(mot4.PLAY);
            break;
        }
        break;

      //--------------------
      case CMD_80://停止
        switch (cmd_sub2) {
          case 0x00:
            mot1.Setplay(mot1.STOP);
            break;
          case 0x01:
            mot2.Setplay(mot2.STOP);
            break;
          case 0x02:
            mot3.Setplay(mot3.STOP);
            break;
          case 0x03:
            mot4.Setplay(mot4.STOP);
            break;
        }
        break;

      //--------------------
      case CMD_B0://0x0000～0xFFFF　pps;
        tmp_pps = (cmd_sub1 << 8) + cmd_sub2;
        break;

      //--------------------
      case CMD_B1://方向
        switch (cmd_sub2) {
          case 0x00:
            tmp_dir = mot1.DIR_FORWARD;
            break;
          case 0x01:
            tmp_dir = mot1.DIR_REVERSE;
            break;
        }
        break;

      //--------------------
      case CMD_B2://値を反映
        switch (cmd_sub2) {
          case 0x00:
            mot1.InitMot(tmp_pps, tmp_dir);
            break;
          case 0x01:
            mot2.InitMot(tmp_pps, tmp_dir);
            break;
          case 0x02:
            mot3.InitMot(tmp_pps, tmp_dir);
            break;
          case 0x03:
            mot4.InitMot(tmp_pps, tmp_dir);
            break;
        }
        break;
      //--------------------
      case CMD_B3://0x0000～0xFFFF　ppsをモーター1に即時反映;
        mot1.Setpps((cmd_sub1 << 8) + cmd_sub2);
        break;

      //--------------------
      case CMD_B4://0x0000～0xFFFF　ppsをモーター2に即時反映;
        mot2.Setpps((cmd_sub1 << 8) + cmd_sub2);
        break;

      //--------------------
      case CMD_B5://0x0000～0xFFFF　ppsをモーター3に即時反映;
        mot3.Setpps((cmd_sub1 << 8) + cmd_sub2);
        break;
      
      //--------------------
      case CMD_B6://0x0000～0xFFFF　ppsをモーター4に即時反映;
        mot4.Setpps((cmd_sub1 << 8) + cmd_sub2);
        break;

    }
    //これがないとReceiveCmdを初期化できない！
    con.ReceiveCmd[i][0] = (byte)0;
    con.ReceiveCmd[i][1] = (byte)0;
    con.ReceiveCmd[i][2] = (byte)0;
  }


}




