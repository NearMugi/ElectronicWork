//MPU6050のデータをUnityへ送信
//VCC -> 5v
//GND -> GND
//SCL -> A5
//SDA -> A4
#include "ConnectUnityManage.h"
#include "interval.h"
#include <FlexiTimer2.h>
#include "MPU6050_Manage.h"
//+++設定++++++++++++++++++++++++++++++
//baudRate = 115200
//endPoint = "\t"
//splitPoint = ','
//++++++++++++++++++++++++++++++++++++
ConnectUnityManage con;
MPU6050_Manage mpu_main;

//Calibration ON/OFF
bool isCalibration;

//MPU6050の初期化時に使用するオフセット
//CalibrationがOFFの時に適用される
int CalOfs[4] = {0, 0, 0, 0}; //Gyro x,y,z, Accel z

//MPU6050から取得するデータ
float mpu6050_EulerAngle[3];  //[x,y,z]
float mpu6050_Quaternion[4];  //[w,x,y,z]
int mpu6050_RealAccel[3];        //[x,y,z]
int mpu6050_WorldAccel[3];       //[x,y,z]
uint8_t mpu6050_teapotPacket[14];

//オフセット値は毎フレームではなく、別の間隔で送信する。
#define SEND_OFFSET_CNT 1000
int cnt_sendOffset;
String sendOffsetData;

//WorldAccelは平均してから送信する。
//毎回送信するとQuaternionの取得に支障が出るため。
#define WORLD_ACCEL_CNT 5
int cnt_worldAccel;
long mpu6050_WorldAccel_Sum[3];
long mpu6050_WorldAccel_Ave[3];
String sendWorldAccelData;

//++++++++++++++++++++++++++
//Command
//++++++++++++++++++++++++++
#define CMD_A0 0xA0 //キャリブレーション開始　0x0000:オフセット指定なし　0x0001:オフセット指定あり
//オフセット指定
//Gyro X
#define CMD_B0 0xB0 //プラス
#define CMD_B1 0xB1 //マイナス
//Gyro Y
#define CMD_C0 0xC0 //プラス
#define CMD_C1 0xC1 //マイナス
//Gyro Z
#define CMD_D0 0xD0 //プラス
#define CMD_D1 0xD1 //マイナス
//Accel Z
#define CMD_E0 0xE0 //プラス
#define CMD_E1 0xE1 //マイナス

//SendData Format ※別の変数にコピーしてから置換する
String sendData_Status = "255,@1\t";  //ヘッダー0xFF
String sendData_Offset = "254,@1,@2,@3,@4\t"; //ヘッダー0xFE
String sendData_Quaternion = "253,@1,@2,@3,@4\t"; //ヘッダー0xFD
String sendData_WorldAccelData = "252,@1,@2,@3\t";  //ヘッダー0xFC

//SendData(One Byte)
struct sendCmd {
  bool flg_7 : 1; //true:初期化完了
  bool flg_6 : 1; //true:オフセットGyroXがゼロ
  bool flg_5 : 1; //true:オフセットGyroYがゼロ
  bool flg_4 : 1; //true:オフセットGyroZがゼロ
  bool flg_3 : 1; //true:オフセットAccelZがゼロ
  bool flg_2 : 1; //
  bool flg_1 : 1; //
  bool flg_0 : 1;
};
struct sendCmd SendCmd_Info;

const unsigned int LOOP_TIME_US = 10000;  //ループ関数の周期(μsec)

void ValueInit() {
  //MPU6050から取得するデータ
  mpu6050_EulerAngle[0] = 0.0f;
  mpu6050_EulerAngle[1] = 0.0f;
  mpu6050_EulerAngle[2] = 0.0f;

  mpu6050_Quaternion[0] = 0.0f;
  mpu6050_Quaternion[1] = 0.0f;
  mpu6050_Quaternion[2] = 0.0f;
  mpu6050_Quaternion[3] = 0.0f;

  mpu6050_RealAccel[0] = 0;
  mpu6050_RealAccel[1] = 0;
  mpu6050_RealAccel[2] = 0;

  mpu6050_WorldAccel[0] = 0;
  mpu6050_WorldAccel[1] = 0;
  mpu6050_WorldAccel[2] = 0;

}

//WorldAccelの平均値を求める。平均値を算出したときだけUnityへ送信する
void Set_Ave_WorldAccel() {
  cnt_worldAccel++;
  sendWorldAccelData = "";

  mpu6050_WorldAccel_Sum[0] += mpu6050_WorldAccel[0];
  mpu6050_WorldAccel_Sum[1] += mpu6050_WorldAccel[1];
  mpu6050_WorldAccel_Sum[2] += mpu6050_WorldAccel[2];

  if (cnt_worldAccel >=  WORLD_ACCEL_CNT) {
    cnt_worldAccel = 0;
    mpu6050_WorldAccel_Ave[0] = mpu6050_WorldAccel_Sum[0] / WORLD_ACCEL_CNT;
    mpu6050_WorldAccel_Ave[1] = mpu6050_WorldAccel_Sum[1] / WORLD_ACCEL_CNT;
    mpu6050_WorldAccel_Ave[2] = mpu6050_WorldAccel_Sum[2] / WORLD_ACCEL_CNT;

    mpu6050_WorldAccel_Sum[0] = 0;
    mpu6050_WorldAccel_Sum[1] = 0;
    mpu6050_WorldAccel_Sum[2] = 0;

    //送信データの作成
    sendWorldAccelData = sendData_WorldAccelData;
    sendWorldAccelData.replace("@1", String(mpu6050_WorldAccel_Ave[0]));
    sendWorldAccelData.replace("@2", String(mpu6050_WorldAccel_Ave[1]));
    sendWorldAccelData.replace("@3", String(mpu6050_WorldAccel_Ave[2]));
  }
}

void SetisSendOffset() {
  cnt_sendOffset++;
  sendOffsetData = "";
  if (cnt_sendOffset >= SEND_OFFSET_CNT) {
    sendOffsetData = sendData_Offset;
    sendOffsetData.replace("@1", String(CalOfs[0]));
    sendOffsetData.replace("@2", String(CalOfs[1]));
    sendOffsetData.replace("@3", String(CalOfs[2]));
    sendOffsetData.replace("@4", String(CalOfs[3]));
  }
}

void setup() {
  con.Init();
  ValueInit();
  mpu_main.reset();

  cnt_sendOffset = 0;
  cnt_worldAccel = 0;
}


void loop() {
  //データ受信・処理・送信
  interval<LOOP_TIME_US>::run([] {

    //データを受信
    con.GetReceiveData();

    //受信データを解析
    ChkReceiveData();

    ValueInit();
    if (mpu_main.isFinishInitialize) {
      mpu_main.updateValue();

      mpu_main.Get_EulerAngle(mpu6050_EulerAngle);
      mpu_main.Get_Quaternion(mpu6050_Quaternion);
      mpu_main.Get_RealAccel(mpu6050_RealAccel);
      mpu_main.Get_WorldAccel(mpu6050_WorldAccel);
      mpu_main.Get_teapotPacket(mpu6050_teapotPacket);

      SetisSendOffset();
      Set_Ave_WorldAccel();
    }

    //送信データを生成,送信
    SetSendData();
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
      case CMD_A0://キャリブレーション開始
        switch (cmd_sub2) {
          case 0x00:
            isCalibration = true;
            mpu_main.init(isCalibration, CalOfs);
            //キャリブレーション開始時のオフセット
            CalOfs[0] = mpu_main.CalOfs[0];
            CalOfs[1] = mpu_main.CalOfs[1];
            CalOfs[2] = mpu_main.CalOfs[2];
            CalOfs[3] = mpu_main.CalOfs[3];

            break;
          case 0x01:
            isCalibration = false;
            mpu_main.init(isCalibration, CalOfs);
            break;
        }
        break;

      //オフセット Gyro X
      case CMD_B0://プラス
        CalOfs[0] = (unsigned int)((cmd_sub1 << 8) + cmd_sub2);
        break;
      case CMD_B1://マイナス
        CalOfs[0] = -1 * (unsigned int)((cmd_sub1 << 8) + cmd_sub2);
        break;

      //オフセット Gyro Y
      case CMD_C0://プラス
        CalOfs[1] = (unsigned int)((cmd_sub1 << 8) + cmd_sub2);
        break;
      case CMD_C1://マイナス
        CalOfs[1] = -1 * (unsigned int)((cmd_sub1 << 8) + cmd_sub2);
        break;

      //オフセット Gyro Z
      case CMD_D0://プラス
        CalOfs[2] = (unsigned int)((cmd_sub1 << 8) + cmd_sub2);
        break;
      case CMD_D1://マイナス
        CalOfs[2] = -1 * (unsigned int)((cmd_sub1 << 8) + cmd_sub2);
        break;

      //オフセット Accel Z
      case CMD_E0://プラス
        CalOfs[3] = (unsigned int)((cmd_sub1 << 8) + cmd_sub2);
        break;
      case CMD_E1://マイナス
        CalOfs[3] = -1 * (unsigned int)((cmd_sub1 << 8) + cmd_sub2);
        break;
    }
  }
}

//送信データを生成,送信
void SetSendData() {
  con.sendData = "";
  String _tmp = "";

  //ステータス
  SendCmd_Info.flg_7 = mpu_main.isFinishInitialize;
  if (CalOfs[0] == 0) SendCmd_Info.flg_6 = true; else SendCmd_Info.flg_6 = false;
  if (CalOfs[1] == 0) SendCmd_Info.flg_5 = true; else SendCmd_Info.flg_5 = false;
  if (CalOfs[2] == 0) SendCmd_Info.flg_4 = true; else SendCmd_Info.flg_4 = false;
  if (CalOfs[3] == 0) SendCmd_Info.flg_3 = true; else SendCmd_Info.flg_3 = false;
  SendCmd_Info.flg_2 = false;
  SendCmd_Info.flg_1 = false;
  SendCmd_Info.flg_0 = false;
  _tmp = sendData_Status;
  _tmp.replace("@1", GetSendCmd_Status());
  con.sendData += _tmp;

  //オフセット
  con.sendData += sendOffsetData;


  //Quaternion
  _tmp = sendData_Quaternion;
  _tmp.replace("@1", String(mpu6050_Quaternion[0]));
  _tmp.replace("@2", String(mpu6050_Quaternion[1]));
  _tmp.replace("@3", String(mpu6050_Quaternion[2]));
  _tmp.replace("@4", String(mpu6050_Quaternion[3]));
  con.sendData += _tmp;

  //ヘッダー(WorldAccel用)
  con.sendData += sendWorldAccelData;

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






