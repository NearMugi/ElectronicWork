//ATtiny13Aを使うサンプル
//Arduinoをライターとして使用
// RESET 1  8 Vcc
// PIN:3 2  7 PIN:2
// PIN:4 3  6 PIN:1
// GND   4  5 PIN:0

#define PIN4 4
#define DTIME 1000

void setup() {
  pinMode(PIN4, OUTPUT);
}

void loop() {
  digitalWrite(PIN4, HIGH);
  delay(DTIME);
  digitalWrite(PIN4, LOW);
  delay(DTIME);
}
