#define PIN_SW 10
#define PIN_LED 13


void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_SW, OUTPUT);
  pinMode(PIN_LED, OUTPUT);
  
  digitalWrite(PIN_SW, LOW);
  digitalWrite(PIN_LED, LOW);
  
}

void loop() {
  //赤モードまで進める。
  digitalWrite(PIN_SW, HIGH);
  digitalWrite(PIN_LED, HIGH);
  delay(150);
  digitalWrite(PIN_SW, LOW);
  digitalWrite(PIN_LED, LOW);

  delay(200);

  digitalWrite(PIN_SW, HIGH);
  digitalWrite(PIN_LED, HIGH);
  delay(100);
  digitalWrite(PIN_SW, LOW);
  digitalWrite(PIN_LED, LOW);

  delay(200);

  digitalWrite(PIN_SW, HIGH);
  digitalWrite(PIN_LED, HIGH);
  delay(100);
  digitalWrite(PIN_SW, LOW);
  digitalWrite(PIN_LED, LOW);

  
  delay(5000);

  //消す
  digitalWrite(PIN_SW, HIGH);
  digitalWrite(PIN_LED, HIGH);
  delay(1500);
  digitalWrite(PIN_SW, LOW);
  digitalWrite(PIN_LED, LOW);

  delay(3000);

}
