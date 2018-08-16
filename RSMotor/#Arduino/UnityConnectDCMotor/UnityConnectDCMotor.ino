//タミヤのRSモーターを動かす
//RS-540,RS-380で確認
#include <ConnectUnityManage.h>
#include <FlexiTimer2.h>
#include "rs.h"
#include "interval.h"

//+++設定++++++++++++++++++++++++++++++
//baudRate = 115200
//endPoint = "\t"
//splitPoint = ','
//++++++++++++++++++++++++++++++++++++
ConnectUnityManage con;
rs _rs;

#define PIN_LOOP_DEBUG 4
bool _lp;

//++++++++++++++++++++++++++
//Command
//++++++++++++++++++++++++++
#define CMD_A0 0xA0 //ON
#define CMD_80 0x80 //OFF
#define CMD_B0 0xB0 //目標スピード(＋)　0～100
#define CMD_B1 0xB1 //目標スピード(－)　0～100
#define CMD_B2 0xB2 //
#define CMD_B3 0xB3 //
#define CMD_B4 0xB4 //

//SendData Format ※別の変数にコピーしてから置換する
String sendData_Status = "255,@1,@2\t";  //ヘッダー0xFF

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
struct sendCmd SendCmd_Info = {false, false, false, false, false, false, false, false};

//割り込み周期用(us)
const unsigned int oneloop = 40;

const unsigned int LOOP_TIME_US = 10000;  //ループ関数の周期(μsec)

//モーター用
int _tmpSpeed;

void setup() {
  con.Init();
  _rs.Setup_Init(MOTOR_RS380);
  _rs.SetReady();
  _tmpSpeed = SPEED_RANGE_INIT;

  pinMode(PIN_LOOP_DEBUG, OUTPUT);
  _lp = false;

  //割込み
  // "1,000,000(us) / oneloop" の逆数 　※変数ではなく実数値でなければ正しい割り込み周期にならない
  FlexiTimer2::set(1, 1.0 / 25000, interrupt_loop); //約40usの割込み
  FlexiTimer2::start();


}

//割り込み処理
void interrupt_loop() {
  _rs.Interrupt(oneloop);  //割り込み時間は決め打ち　※時間を計算するよりも安定
}

void loop() {

  //データ受信・処理・送信
  interval<LOOP_TIME_US>::run([] {
    _lp = !_lp;
    digitalWrite(PIN_LOOP_DEBUG, _lp);

#if false
    //デバッグ用
    _rs.Debug_SetTargetSpeed();
#else
    //データを受信
    con.GetReceiveData();

    //受信データを解析
    ChkReceiveData();

    //目標スピードを更新
    _rs.SetTargetSpeed(_tmpSpeed);

    //送信データを生成,送信
    SetSendData();
#endif
  });
}

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
      case CMD_A0://Start
        _rs.SetReady();
        break;

      case CMD_B0://目標スピード(＋)
        _tmpSpeed = (unsigned int)((cmd_sub1 << 8) + cmd_sub2);
        break;

      case CMD_B1://目標スピード(－)
        _tmpSpeed = (unsigned int)((cmd_sub1 << 8) + cmd_sub2);
        _tmpSpeed *= -1;
        break;
    }
  }
}

//送信データを生成
void SetSendData() {
  con.sendData = "";
  String _tmp = sendData_Status;

  //ステータス
  //flg_6 : 1周期On(true) , Off(false)
  //flg_5 : プラス方向の回転
  //flg_4 : マイナス方向の回転
  SendCmd_Info.flg_6 = _rs.CreateSendData_isOn();
  bool _sw = _rs.CreateSendData_isNormalRotation();
  SendCmd_Info.flg_5 = _sw;
  SendCmd_Info.flg_4 = !_sw;

  _tmp.replace("@1", GetSendCmd_Status());

  //目標速度(絶対値)
  _tmp.replace("@2", String(abs(_rs.Get_targetSpeed())));
  con.sendData = _tmp;

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

