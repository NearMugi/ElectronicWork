// Arduino <-> Unity Connect
#include "ConnectUnityManage.h"
#include "interval.h"
#include <FlexiTimer2.h>
//+++設定++++++++++++++++++++++++++++++
//baudRate = 115200
//endPoint = "\t"
//splitPoint = ','
//++++++++++++++++++++++++++++++++++++
ConnectUnityManage con;

//SendData Format ※別の変数にコピーしてから置換する
String sendData = "255,@1\t"; //ヘッダー0xFF

const unsigned int LOOP_TIME_US = 16600; //ループ関数の周期(μsec)

#define PIN_SW 8
#define PIN_X A0
#define PIN_Y A1

bool isOn;
bool isWait;
int baseValue = 500;
int range = 400;
unsigned long waitTime;

void setup()
{
  con.Init();
  pinMode(PIN_SW, INPUT_PULLUP);

  isWait = false;
  waitTime = millis();
}

void loop()
{
  //データ受信・処理・送信
  interval<LOOP_TIME_US>::run([] {
    //joyStickの入力判定
    isOn = false;
    if (isWait)
    {
      if (millis() > waitTime)
      {
        isWait = false;
      }
    }
    else
    {
      //入力値が閾値を超えていた場合、ONにする
      if (abs(analogRead(PIN_X) - baseValue) > range)
      {
        isOn = true;
        isWait = true;
        waitTime = millis() + 600;
      }
      else
      {
        if (abs(analogRead(PIN_Y) - baseValue) > range)
        {
          isOn = true;
          isWait = true;
          waitTime = millis() + 600;
        }
      }
    }

    //データを受信
    con.GetReceiveData();

    //送信データを生成,送信
    SetSendData();
  });
}

//送信データを生成,送信
void SetSendData()
{
  con.sendData = "";
  String _tmp = "";
  _tmp = sendData;
  _tmp.replace("@1", String(isOn));
  con.sendData = _tmp;

  //送信
  con.Send();
}
