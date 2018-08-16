//MPU6050からRAWデータを取得

//■インクルードファイル
#include "I2Cdev.h"
#include "MPU6050.h"

#if I2CDEV_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
    #include "Wire.h"
#endif

//■加速度 Full-Scale Range
#define ACCEL_FSR MPU6050_ACCEL_FS_2
//#define ACCEL_FSR MPU6050_ACCEL_FS_4
//#define ACCEL_FSR MPU6050_ACCEL_FS_8
//#define ACCEL_FSR MPU6050_ACCEL_FS_16

//■加速度 Sensitivity Scale Factor
#define ACCEL_SSF 16384.0
//#define ACCEL_SSF 8192.0
//#define ACCEL_SSF 4096.0
//#define ACCEL_SSF 2048.0

//■角速度 Full-Scale Range
#define GYRO_FSR MPU6050_GYRO_FS_250
//#define GYRO_FSR MPU6050_GYRO_FS_500
//#define GYRO_FSR MPU6050_GYRO_FS_1000
//#define GYRO_FSR MPU6050_GYRO_FS_2000

//■角速度 Sensitivity Scale Factor
#define GYRO_SSF 131.0
//#define GYRO_SSF 65.5
//#define GYRO_SSF 32.8
//#define GYRO_SSF 16.4

//■「MPU6050」クラスのオブジェクト作成
MPU6050 mpu;
//MPU6050 mpu(0x69);

//■機体座標系
int16_t mpu_accel_x, mpu_accel_y, mpu_accel_z; //加速度(raw)
int16_t mpu_gyro_x, mpu_gyro_y, mpu_gyro_z;    //角速度(raw)

void setup() {
  //■I2C処理開始
  #if I2CDEV_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
    Wire.begin();
  #elif I2CDEV_IMPLEMENTATION == I2CDEV_BUILTIN_FASTWIRE
    Fastwire::setup(400, true);
  #endif

  //■シリアル通信を開始
  Serial.begin(38400);
  while (!Serial);

  //■MPU-6050デバイスの初期化
  mpu.initialize();

  //■MPU-6050デバイスの接続を確認
  if(mpu.testConnection() != true) {
    Serial.println(F("ERROR testConnection"));
    return; // 接続失敗
  }

  //■加速度計のフルスケールレンジを設定
  mpu.setFullScaleAccelRange(ACCEL_FSR);
  //■角速度計のフルスケールレンジを設定
  mpu.setFullScaleGyroRange(GYRO_FSR);

}

void loop() {
  //■加速度/角速度のrawデータを読み込む
  mpu.getMotion6(&mpu_accel_x, &mpu_accel_y, &mpu_accel_z,
                 &mpu_gyro_x, &mpu_gyro_y, &mpu_gyro_z);
  
  //Serial.print(micros()); Serial.print(",");
  Serial.print(mpu_accel_x); Serial.print(",");
  Serial.print(mpu_accel_y); Serial.print(",");
  Serial.print(mpu_accel_z); Serial.print(",");
  Serial.print(mpu_gyro_x); Serial.print(",");
  Serial.print(mpu_gyro_y); Serial.print(",");
  Serial.println(mpu_gyro_z);

}
