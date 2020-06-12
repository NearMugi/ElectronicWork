#include "Arduino.h"
#define PIN_CS 10
#define PIN_INC 9
#define PIN_UD 8

void setup()
{
    pinMode(PIN_CS, OUTPUT);
    pinMode(PIN_INC, OUTPUT);
    pinMode(PIN_UD, OUTPUT);
    digitalWrite(PIN_CS, HIGH);
    digitalWrite(PIN_INC, HIGH);
    digitalWrite(PIN_UD, HIGH);
}
void loop()
{
    for (int i = 0; i <= 100; i += 10)
    {
        setResistance(i);
        delay(100);
    }
}
void setResistance(int percent)
{
    digitalWrite(PIN_UD, LOW);
    digitalWrite(PIN_CS, LOW);
    for (int i = 0; i < 100; i++)
    {
        digitalWrite(PIN_INC, LOW);
        delayMicroseconds(1);
        digitalWrite(PIN_INC, HIGH);
        delayMicroseconds(1);
    }
    digitalWrite(PIN_UD, HIGH);
    for (int i = 0; i < percent; i++)
    {
        digitalWrite(PIN_INC, LOW);
        delayMicroseconds(1);
        digitalWrite(PIN_INC, HIGH);
        delayMicroseconds(1);
    }

    digitalWrite(PIN_CS, HIGH);
}