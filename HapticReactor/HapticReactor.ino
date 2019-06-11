//HapticReactorをwavファイルで制御

#include "Arduino.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

#define PIN_RX 10
#define PIN_TX 11
SoftwareSerial mySoftwareSerial(PIN_RX, PIN_TX); // RX, TX
DFRobotDFPlayerMini myDFPlayer;

//ループ周期(us)
#include "interval.h"
#define LOOPTIME_PULSE_160 200000

class haptic
{
public:
    haptic(int no)
    {
        wavNo = no;
    }
    void play()
    {
        myDFPlayer.play(wavNo);
    }

private:
    int wavNo;
};
haptic ptn160 = haptic(1);

void setup()
{
    mySoftwareSerial.begin(9600);
    Serial.begin(115200);

    if (!myDFPlayer.begin(mySoftwareSerial))
    {
        //Use softwareSerial to communicate with mp3.
        Serial.println(F("Unable to begin:"));
        while (true)
            ;
    }
    Serial.println(F("DFPlayer Mini online."));

    myDFPlayer.volume(30); //Set volume value. From 0 to 30
}

void loop()
{
    interval<LOOPTIME_PULSE_160>::run([] {
        ptn160.play();
    });
}
