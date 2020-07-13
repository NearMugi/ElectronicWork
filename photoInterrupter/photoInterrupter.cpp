// ++++++++++++++++++++++
// PhotoInterrupterの値を集計するクラス
// ++++++++++++++++++++++

#include "photoInterrupter.h"

// 初期化
void photoInterrupter::init(int _threshold, int _pin)
{
  threshold = _threshold;
  inputPin = _pin;
  cntTime = millis();
  loopTime = 0;
}

// 周期の観測　周期を更新した場合Trueを返す
bool photoInterrupter::chkLoopTime()
{
  // 指定した区間内の最大値が閾値を超えたか判定する
  bool lastIsOn = isOn;
  isOn = false;
  analogData = analogRead(inputPin);
  analogMaxData = analogData;
  analogAvgData = analogData;
  // 箱に入れる
  for (int i = 0; i < BOX_SIZE - 1; i++)
  {
    inputBox[i] = inputBox[i + 1];
    if (inputBox[i] > analogMaxData)
    {
      analogMaxData = inputBox[i];
    }
    analogAvgData += inputBox[i];
  }
  inputBox[BOX_SIZE - 1] = analogData;

  if (analogMaxData >= threshold)
    isOn = true;
  analogAvgData /= BOX_SIZE;

  // OFF -> ONの時、1周したと判断する
  if (!lastIsOn && isOn)
  {
    loopTime = millis() - cntTime;
    cntTime = millis();
    return true;
  }
  return false;
}