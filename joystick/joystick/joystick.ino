// +++++++++++++++++++++++++
// joyStickの制御
// ※圧力センサー(PIN_BTN)も含まれている(デジタル入力)
// +++++++++++++++++++++++++

#define PIN_SW 8
#define PIN_X A0
#define PIN_Y A1

#define PIN_BTN 4

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(PIN_SW, INPUT_PULLUP);
  pinMode(PIN_BTN, INPUT_PULLUP);
}

void loop()
{
  // put your main code here, to run repeatedly:
  Serial.print(digitalRead(PIN_BTN));
  Serial.print(", ");
  Serial.print(digitalRead(PIN_SW));
  Serial.print(", ");
  Serial.print(analogRead(PIN_X));
  Serial.print(", ");
  Serial.print(analogRead(PIN_Y));
  Serial.println(", ");
}
