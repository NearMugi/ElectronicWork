//VCC -> 5v
//GND -> GND
//SCL -> A5
//SDA -> A4

//#define SAMPLE
#define ACTION//アクションの判定有無

#include "MPU6050_Manage.h"
MPU6050_Manage mpu_main;

#ifdef ACTION
#include "MPU6050_Action.h"
MPU6050_Action mpu_action;
String msg;
String tmpSendData = "[@1,@2]";
#define WAIT_NEXTTIME_MS 5000 //判定してからの待ち時間(ms)
uint16_t waitTime = 0; //待ち時間
bool isAct = false;
#define MSG_ACCEPT "Accepting actions..."
#define MSG_WAIT "Wait Next Time..."
#endif

//Calibration ON/OFF
bool isCalibration = false;

//MPU6050の初期化時に使用するオフセット
//CalibrationがOFFの時に適用される
int CalOfs[4] = {167, -27, -18, 1072}; //Gyro x,y,z, Accel z

//MPU6050から取得するデータ
float mpu6050_EulerAngle[3];  //[x,y,z]
float mpu6050_Quaternion[4];  //[w,x,y,z]
float mpu6050_Gravity[3];     //[x,y,z]
int mpu6050_RealAccel[3];     //[x,y,z]
int mpu6050_WorldAccel[3];    //[x,y,z]
uint8_t mpu6050_teapotPacket[14];


//ループ周期(us)
#include "interval.h"
#define LOOP_TIME_US 10000

void setup() {
  Serial.begin(115200);

  //キャリブレーションする必要ない場合はオフセットを渡す
  mpu_main.init(isCalibration, CalOfs);

#ifdef ACTION
  //上面・アクションの判定用変数の初期化
  mpu_action.initJdgAct();
  Serial.println(MSG_ACCEPT);
#endif

}

void loop() {
  interval<LOOP_TIME_US>::run([] {
    mpu_main.updateValue();

    mpu_main.Get_EulerAngle(mpu6050_EulerAngle);
    mpu_main.Get_Quaternion(mpu6050_Quaternion);
    mpu_main.Get_Gravity(mpu6050_Gravity);
    mpu_main.Get_RealAccel(mpu6050_RealAccel);
    mpu_main.Get_WorldAccel(mpu6050_WorldAccel);
    mpu_main.Get_teapotPacket(mpu6050_teapotPacket);

#ifdef ACTION
    if (isAct) {
      //次のPublish送信が有効になるまで待ち
      if ((millis() - waitTime) > WAIT_NEXTTIME_MS) {
        //再開
        mpu_action.initJdgAct();
        Serial.println(MSG_ACCEPT);
        isAct = false;
      } else {
        return;
      }
    }
    mpu_action.Jdg_Top(mpu6050_Gravity);  //どの面が上になっているか判断
    mpu_action.Jdg_Action(mpu6050_WorldAccel); //アクションを判断
    //メッセージの作成
    msg = tmpSendData;
    msg.replace("@1", String(mpu_action.top));
    msg.replace("@2", String(mpu_action.action));
    //Serial.println(msg);

    //アクションがあった時、次の判定を待つ
    if (mpu_action.action != ACT_KEEP) {
      switch (mpu_action.action) {
        case ACT_SHAKE_V:
          Serial.println("SHAKE_V");
          break;
        case ACT_SHAKE_H:
          Serial.println("SHAKE_H");
          break;
      }
      Serial.println(MSG_WAIT);
      isAct = true;
      waitTime = millis();
    }

#endif

#ifdef SAMPLE
    String _s = "";
    _s += String(mpu6050_WorldAccel[0]);
    _s += ",";
    _s += String(mpu6050_WorldAccel[1]);
    _s += ",";
    _s += String(mpu6050_WorldAccel[2]);
    Serial.println(_s);
#endif
  });

}
