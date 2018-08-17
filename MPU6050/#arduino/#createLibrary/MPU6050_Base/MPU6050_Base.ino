//VCC -> 5v
//GND -> GND
//SCL -> A5
//SDA -> A4
#include "MPU6050_Manage.h"
MPU6050_Manage mpu_main;

//Calibration ON/OFF
bool isCalibration;

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
  isCalibration = false;
  mpu_main.init(isCalibration, CalOfs);

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

    String _s = "";
    _s += String(mpu6050_Gravity[0]);
    _s += ",";
    _s += String(mpu6050_Gravity[1]);
    _s += ",";
    _s += String(mpu6050_Gravity[2]);
    Serial.println(_s);
  });

}
