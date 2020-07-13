#ifndef PHOTO_INTERRUPTER_H
#define PHOTO_INTERRUPTER_H
#include <arduino.h>

#define BOX_SIZE 5

// PhotoInterrupterの値を集計するクラス
class photoInterrupter
{
public:
  volatile bool isOn;
  volatile unsigned long cntTime;
  volatile unsigned long loopTime;
  volatile unsigned int analogData;
  volatile unsigned int analogMaxData;
  volatile float analogAvgData;

  void init(int _threshold, int _pin);
  bool chkLoopTime();

private:
  int threshold;
  int inputPin;
  volatile int inputBox[BOX_SIZE] = {};
};

#endif
