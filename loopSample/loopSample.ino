#include "interval.h"

#define PIN_1 3
#define PIN_2 4
#define PIN_3 5
bool sw_1;
bool sw_2;
bool sw_3;

void setup() {
  Serial.begin(9600);
  pinMode(PIN_1, OUTPUT);
  pinMode(PIN_2, OUTPUT);
  pinMode(PIN_3, OUTPUT);
  sw_1 = false;
  sw_2 = false;
  sw_3 = false;

  digitalWrite(PIN_1, sw_1);
  digitalWrite(PIN_2, sw_2);
  digitalWrite(PIN_3, sw_3);

}

void loop() {

  interval<10000>::run([] {
    sw_1 = !sw_1;
    digitalWrite(PIN_1, sw_1);
  });

  interval<250000>::run([] {
    sw_2 = !sw_2;
    digitalWrite(PIN_2, sw_2);
  });

  interval<1000000>::run([] {
    sw_3 = !sw_3;
    digitalWrite(PIN_3, sw_3);
  });

}
