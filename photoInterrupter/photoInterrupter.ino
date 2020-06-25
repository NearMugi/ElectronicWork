// PhotoInterrupter
// KODENSHI SG2A02
#include "intervalMs.h"
#define PIN_ON A0
#define MAX_CNT 7
#define ON_THRESHOLD 5
int inputBox[MAX_CNT];
int inputMax;

// 入力値を保存する箱を初期化
void initInputBox()
{
    for (int i = 0; i < MAX_CNT; i++)
    {
        inputBox[i] = 0;
    }
}

// 最大値が閾値を超えたか判定する
bool jdgThreshold(int _v)
{
    inputMax = _v;
    bool isOn = false;
    // 箱に入れる
    for (int i = 0; i < MAX_CNT - 1; i++)
    {
        inputBox[i] = inputBox[i + 1];
        if (inputBox[i] > inputMax)
        {
            inputMax = inputBox[i];
        }
    }
    inputBox[MAX_CNT - 1] = _v;

    if (inputMax >= ON_THRESHOLD)
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
        Serial.println(isOn);
#if false
        Serial.print(v);
        Serial.print(",");
        Serial.print(inputMax);
        Serial.print(",");
        Serial.println(isOn);
#endif
    });
}