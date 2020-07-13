// PhotoInterrupter
// KODENSHI SG2A02
#include <FlexiTimer2.h>
#include "intervalMs.h"
#include "photoInterrupter.h"
#define PIN_ON A0
#define CHECK_INTERRUPT 15
#define ON_THRESHOLD 75
photoInterrupter pi;

#define LOOPTIME_LOG 5

//割り込み処理
void interrupt_loop()
{
    pi.chkLoopTime();
}

void setup()
{
    Serial.begin(115200);
    //割込み
    FlexiTimer2::set(CHECK_INTERRUPT, interrupt_loop);
    FlexiTimer2::start();
    pi.init(ON_THRESHOLD, PIN_ON);
}

void loop()
{
    interval<LOOPTIME_LOG>::run([] {
        Serial.print((float)(pi.analogData) / ON_THRESHOLD);
        Serial.print(",");
        Serial.print(pi.isOn);
        Serial.println("");
    });
}