// PhotoInterrupter
// KODENSHI SG2A02
#include "intervalMs.h"
#define PIN_ON A0
#define AVG_CNT 5
#define ON_THRESHOLD 0.75
int inputBox[AVG_CNT];
float inputAvg;

// 入力値を保存する箱を初期化
void initInputBox()
{
    for (int i = 0; i < AVG_CNT; i++)
    {
        inputBox[i] = 0;
    }
}

// 平均値が閾値を超えたか判定する
bool jdgThreshold(int _v)
{
    inputAvg = _v;
    bool isOn = false;
    // 箱に入れる
    for (int i = 0; i < AVG_CNT - 1; i++)
    {
        inputAvg += inputBox[i];
        inputBox[i] = inputBox[i + 1];
    }
    inputBox[AVG_CNT - 1] = _v;

    inputAvg /= AVG_CNT;
    if (inputAvg >= ON_THRESHOLD)
        isOn = true;
    return isOn;
}

void setup()
{
    Serial.begin(115200);
    initInputBox();
}

void loop()
{
    interval<10>::run([] {
        int v = analogRead(PIN_ON);
        bool isOn = jdgThreshold(v);
#if false
        Serial.print(v);
        Serial.print(",");
        Serial.print(inputAvg);
        Serial.print(",");
#endif
        Serial.println(isOn);
    });
}