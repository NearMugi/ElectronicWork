#include <ConnectUnityManage.h>
#include <FlexiTimer2.h>
//+++設定++++++++++++++++++++++++++++++
//baudRate = 115200
//endPoint = "\t"
//splitPoint = ','
//++++++++++++++++++++++++++++++++++++
ConnectUnityManage con;

#include "Valve.h"
#include "Pump.h"
#include "PhotoelectricSensor.h"

Valve _valve;
Pump _pump;
PhotoelectricSensorManage _ph;

//++++++++++++++++++++++++++
//Command
//++++++++++++++++++++++++++
#define CMD_A0 0xA0 //0x0000　バルブ実行・0x0001　ポンプ実行・0x0002　光電センサモードON
#define CMD_80 0x80 //0x0000  バルブ停止・0x0001　ポンプ停止・0x0002　光電センサモードOFF
#define CMD_B0 0xB0 //0x0000～0xFFFF　1サイクルの時間(ms) ※整数部分
#define CMD_B1 0xB1 //0x0000～0xFFFF　1サイクルの時間(ms) ※小数部分
#define CMD_B2 0xB2 //0x0000～0xFFFF　1サイクルのOn時間(ms) ※1桁目は小数点第1位
#define CMD_B3 0xB3 //0x0000～0xFFFF　1サイクルを実行する回数(回)
#define CMD_C0 0xC0 //1サイクルの時間を初期化


//SendData(One Byte)
struct sendCmd {
  bool flg_7 : 1; //
  bool flg_6 : 1; //光電センサモード
  bool flg_5 : 1; //1ループ終了
  bool flg_4 : 1; //電磁弁開閉
  bool flg_3 : 1; //ポンプON
  bool flg_2 : 1; //電磁弁ON
  bool flg_1 : 1; //トリガーON(光電センサ)
  bool flg_0 : 1;
};
struct sendCmd SendCmd_Info;

//割り込み周期用(us)
const unsigned int oneloop = 40;

const unsigned int LOOP_TIME_US = 10000;  //ループ関数の周期(μsec)
int processingTime; //loopの頭から最後までの処理時間

bool _isPhotoSensorOn;

void setup() {
  con.Init();
  _valve.Init();
  _pump.Init(false);  //トグルスイッチの使用有無を指定
  _ph.Init();

  //割込み
  // "1,000,000(us) / oneloop" の逆数 　※変数ではなく実数値でなければ正しい割り込み周期にならない
  FlexiTimer2::set(1, 1.0 / 25000, interrupt_loop); //約40usの割込み
  FlexiTimer2::start();
}

//割り込み処理
void interrupt_loop() {
  //電磁弁のON/OFF
  _valve.UpdateOnOff(oneloop); //割り込み時間は決め打ち　※時間を計算するよりも安定
}



void loop() {
  processingTime = micros();

  //光電センサモードONの時だけ処理する
  //光電センサからの入力ありの場合、
  //電磁弁を可動させる・光電センサモードはOFFにする。
  if (_ph.Get_isEnable()) {
    if (_ph.Port_Read()) {
      _isPhotoSensorOn = true;
      _ph.Set_isEnable(false);
      _valve.Set_isPlay(false);
    }
  }

  //ポンプのON/OFF
  _pump.UpdateOnOff(LOOP_TIME_US);  //経過時間は固定

  //データを受信
  con.GetReceiveData();

  //受信データを解析
  ChkReceiveData();

  //送信データを生成,送信
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

//受信データを解析
void ChkReceiveData() {
  Update_Command(con.OneSetCmd, con.ReceiveCmd);
}

//送信データを生成
void SetSendData() {
  con.sendData = "";

  //ヘッダー
  //全てTrue
  con.sendData += 0xFF;
  con.sendData += ",";

  //ステータス
  // flg_6 : 光電センサモード
  // flg_5 : 1ループ終了
  // flg_4 : 電磁弁開閉
  // flg_3 : ポンプON
  // flg_2 : 電磁弁ON
  // flg_1 : トリガーON(光電センサ)
  SendCmd_Info.flg_7 = false;
  SendCmd_Info.flg_6 = _ph.Get_isEnable();
  SendCmd_Info.flg_5 = _valve.Get_isValveOneloopEnd();
  SendCmd_Info.flg_4 = _valve.Get_isValveOpen();
  SendCmd_Info.flg_3 = _pump.Get_isPlay();
  SendCmd_Info.flg_2 = _valve.Get_isEnablePlay();
  SendCmd_Info.flg_1 = _isPhotoSensorOn;
  SendCmd_Info.flg_0 = false;

  con.sendData += GetSendCmd_Status();
  con.sendData += ",";

  //1サイクルの時間(us)
  con.sendData += String(_valve._set_oneTime);
  con.sendData += ",";
  
  //1サイクルのOn時間(us)
  con.sendData += String(_valve._set_oneTime_on);
  con.sendData += ",";
  
  //実行回数
  con.sendData += String(_valve._set_cycleCnt);
  con.sendData += '\t';


  //送信
  con.Send();
}

//送信コマンドの生成
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

//各プロジェクトで異なる
void Update_Command(int size, byte rCmd[][3]) {

  byte cmd_main;
  byte cmd_sub1;
  byte cmd_sub2;
  unsigned int _getData;
  unsigned long _tmp;
  //+++++++++++++++++++++++++++
  for (int i = 0; i < size; i++) {
    cmd_main = rCmd[i][0];
    cmd_sub1 = rCmd[i][1];
    cmd_sub2 = rCmd[i][2];

    _getData = (unsigned int)((cmd_sub1 << 8) + cmd_sub2);  //0x0000 ～　0xFFFFを0～65535に変換する
        
    switch (cmd_main) {
      //--------------------
      case CMD_A0://Start
        switch (cmd_sub2) {
          case 0x00:
            _valve.Set_isPlay(true);
            break;
          case 0x01:
            _pump.Set_isPlay(true);
            break;
          case 0x02:
            _isPhotoSensorOn = false;
            _ph.Set_isEnable(true);
            break;

        }
        break;

      //--------------------
      case CMD_80://Stop
        switch (cmd_sub2) {
          case 0x00:
            _valve.Set_isPlay(false);
            break;
          case 0x01:
            _pump.Set_isPlay(false);
            break;
          case 0x02:
            _isPhotoSensorOn = false;
            _ph.Set_isEnable(false);
            break;
        }
        break;

      case CMD_B0://0x0000～0xFFFF　1サイクルの時間(ms) ※整数部分
        _tmp = _valve._set_oneTime - (unsigned long)(_valve._set_oneTime / 1000) * 1000; //小数部分だけにする
        _valve._set_oneTime = _tmp + (unsigned long)_getData * 1000;  //usに変換
        break;

      case CMD_B1://0x0000～0xFFFF　1サイクルの時間(ms) ※小数部分
        _tmp = (unsigned long)(_valve._set_oneTime / 1000) * 1000; //整数部分だけにする
        _valve._set_oneTime = _tmp + (unsigned long)_getData;  //小数部分を足す
        break;

      case CMD_B2://0x0000～0xFFFF　1サイクルのOn時間(ms) ※1桁目は小数点第1位
        _valve._set_oneTime_on = (unsigned long)_getData * 100; //usに変換
        break;

      case CMD_B3://0x0000～0xFFFF　1サイクルを実行する回数(回)
        _valve._set_cycleCnt = _getData;
        break;

      case CMD_C0://1サイクルの時間を初期化
        _valve._set_oneTime = 0;
        break;

    }
    //これがないとReceiveCmdを初期化できない！
    con.ReceiveCmd[i][0] = (byte)0;
    con.ReceiveCmd[i][1] = (byte)0;
    con.ReceiveCmd[i][2] = (byte)0;
  }


}




