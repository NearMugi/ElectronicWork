//Unity経由でパトライトを光らせる
//SW -> PIN10
#include "ConnectUnityManage.h"
#include <FlexiTimer2.h>
//+++設定++++++++++++++++++++++++++++++
//baudRate = 115200
//endPoint = "\t"
//splitPoint = ','
//++++++++++++++++++++++++++++++++++++
ConnectUnityManage con;

#define PIN_SW 10
#define PIN_LED 13

//++++++++++++++++++++++++++
//Command
//++++++++++++++++++++++++++
#define CMD_A0 0xA0 // ON/OFF　0x0000:OFF　0x0001:ON

//SendData Format ※別の変数にコピーしてから置換する
String sendData_Status = "255,@1\t";  //ヘッダー0xFF

//SendData(One Byte)
struct sendCmd {
  bool flg_7 : 1; //true:ON
  bool flg_6 : 1; //
  bool flg_5 : 1; //
  bool flg_4 : 1; //
  bool flg_3 : 1; //
  bool flg_2 : 1; //
  bool flg_1 : 1; //
  bool flg_0 : 1;
};
struct sendCmd SendCmd_Info;

//ループ周期(us)
#include "interval.h"
#define LOOP_TIME_CMD 20000 //コマンド受信
#define LOOP_TIME_LED 10000 //LEDパターンOn/Off

class ctlPato {
  public:
    ctlPato() {
      isOn = false;
      isChg = false;
    }
    bool isOn;
    bool isChg;

    void setting() {
      isEnd = false;
      baseCnt = 0;
      targetPos = 0;
      isHighLow = true;
    }

    //delayを使わず、High(Low)を送る。
    void change() {
      if (isEnd) return;

      int _tmpCnt = 0;
      int _tmpMaxSize = 0;
      if (isOn) {
        _tmpCnt = OnTbl[targetPos];
        _tmpMaxSize = OnTblSize;
      } else {
        _tmpCnt = OffTbl[targetPos];
        _tmpMaxSize = OffTblSize;
      }

      if (baseCnt >= _tmpCnt) {
        digitalWrite(PIN_SW, isHighLow);
        digitalWrite(PIN_LED, isHighLow);
        
        isHighLow = !isHighLow;
        baseCnt = 0;
        targetPos++;
      } else {
        baseCnt++;
      }

      if(targetPos >= _tmpMaxSize) {
        isEnd = true;
      }

    }

  private:
    bool isEnd;
    int baseCnt;
    int targetPos;
    bool isHighLow;

    //High,Lowを送るタイミングをテーブルにしている。
    //10ms単位
    static const int OnTblSize = 6;
    int OnTbl[OnTblSize] = {0, 15, 20, 10, 20, 10};

    static const int OffTblSize = 2;
    int OffTbl[OffTblSize] = {0, 150};


};
ctlPato _Pato;

void setup() {
  con.Init();

  pinMode(PIN_SW, OUTPUT);
  pinMode(PIN_LED, OUTPUT);

  digitalWrite(PIN_SW, LOW);
  digitalWrite(PIN_LED, LOW);

}

void loop() {
  //データ受信・処理・送信
  interval<LOOP_TIME_CMD>::run([] {

    //データを受信
    con.GetReceiveData();

    //受信データを解析
    ChkReceiveData();

    //送信データを生成,送信
    SetSendData();
  });

  interval<LOOP_TIME_LED>::run([] {
    //LEDパターンOn/Off
    _Pato.change();
  });

}

//+++++++++++++++++++++++++++++++++++++++++++++++++++
//コマンドや連続データの処理は各プロジェクトで異なるため、
//ライブラリーの外に定義している。
//+++++++++++++++++++++++++++++++++++++++++++++++++++

//受信データを解析
void ChkReceiveData() {

  byte cmd_main;
  byte cmd_sub1;
  byte cmd_sub2;
  //+++++++++++++++++++++++++++
  for (int i = 0; i < con.OneSetCmd; i++) {
    cmd_main = con.ReceiveCmd[i][0];
    cmd_sub1 = con.ReceiveCmd[i][1];
    cmd_sub2 = con.ReceiveCmd[i][2];

    switch (cmd_main) {
      //--------------------
      case CMD_A0:// ON/OFF
        switch (cmd_sub2) {
          case 0x00: //OFF
            _Pato.isOn = false;
            _Pato.isChg = true;
            _Pato.setting();
            break;

          case 0x01: //ON
            _Pato.isOn = true;
            _Pato.isChg = true;
            _Pato.setting();
            break;
        }
        break;
    }
  }
}

//送信データを生成,送信
void SetSendData() {
  con.sendData = "";
  String _tmp = "";

  //ステータス
  SendCmd_Info.flg_7 = _Pato.isOn;
  SendCmd_Info.flg_2 = false;
  SendCmd_Info.flg_1 = false;
  SendCmd_Info.flg_0 = false;
  _tmp = sendData_Status;
  _tmp.replace("@1", GetSendCmd_Status());
  con.sendData += _tmp;

  //送信
  con.Send();

}

//ステータスから送信コマンドの生成
String GetSendCmd_Status() {
  byte _b = (byte)((SendCmd_Info.flg_7 << 7) |
                   (SendCmd_Info.flg_6 << 6) |
                   (SendCmd_Info.flg_5 << 5) |
                   (SendCmd_Info.flg_4 << 4) |
                   (SendCmd_Info.flg_3 << 3) |
                   (SendCmd_Info.flg_2 << 2) |
                   (SendCmd_Info.flg_1 << 1) |
                   (SendCmd_Info.flg_0)
                  );
  return String(_b);
}
