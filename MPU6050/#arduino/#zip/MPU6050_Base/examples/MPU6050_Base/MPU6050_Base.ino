//VCC -> 5v
//GND -> GND
//SCL -> A5
//SDA -> A4
#include "MPU6050_Manage.h"
#define QUATERNION true
#define GRAVITY true
#define ACCEL true
#define LINEARACCEL true
#define LINEARACCELINWORLD true
#define YAWPITCHROLL true
MPU6050_Manage mpu_main(QUATERNION, GRAVITY, ACCEL, LINEARACCEL, LINEARACCELINWORLD, YAWPITCHROLL);

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

const unsigned int LOOP_TIME_US = 10000;  //ループ関数の周期(μsec)
int processingTime; //loopの頭から最後までの処理時間

void setup() {
  Serial.begin(115200);

  //キャリブレーションする必要ない場合はオフセットを渡す
  isCalibration = false;
  CalOfs[0] = 167;
  CalOfs[1] = -27;
  CalOfs[2] = -18;
  CalOfs[3] = 1072;
  mpu_main.init(isCalibration, CalOfs);
  
}

void loop() {
  processingTime = micros();
  mpu_main.updateValue();

  mpu_main.Get_EulerAngle(mpu6050_EulerAngle);
  mpu_main.Get_Quaternion(mpu6050_Quaternion);
  mpu_main.Get_RealAccel(mpu6050_RealAccel);
  mpu_main.Get_WorldAccel(mpu6050_WorldAccel);
  mpu_main.Get_teapotPacket(mpu6050_teapotPacket);

  String _s = "";
  _s += String(mpu6050_WorldAccel[0]);
  _s += ",";
  _s += String(mpu6050_WorldAccel[1]);
  _s += ",";
  _s += String(mpu6050_WorldAccel[2]);
  Serial.println(_s);


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