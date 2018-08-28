// BLE Nano2 Ltika
#define PIN_LED D13

void setup() {
  pinMode(PIN_LED, OUTPUT);
}
 
void loop() {
  digitalWrite(PIN_LED, HIGH);
  delay(1000);
  digitalWrite(PIN_LED, LOW);
  delay(1000);
}
