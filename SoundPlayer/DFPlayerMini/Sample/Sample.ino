//関数は以下参照
//https://www.dfrobot.com/wiki/index.php/DFPlayer_Mini_SKU:DFR0299
#include "Arduino.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

#define PIN_RX 10
#define PIN_TX 11
SoftwareSerial mySoftwareSerial(PIN_RX, PIN_TX); // RX, TX
DFRobotDFPlayerMini myDFPlayer;

void setup()
{
  mySoftwareSerial.begin(9600);
  Serial.begin(115200);

  if (!myDFPlayer.begin(mySoftwareSerial)) {  //Use softwareSerial to communicate with mp3.
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    while(true);
  }
  Serial.println(F("DFPlayer Mini online."));
  
  myDFPlayer.volume(30);  //Set volume value. From 0 to 30
}

void loop()
{
  static unsigned long timer = millis();
  
  if (millis() - timer > 3000) {
    timer = millis();
    myDFPlayer.play(1);
  }
}

