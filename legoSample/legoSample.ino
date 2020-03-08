//lego
#define MOT_F 5
#define MOT_B 6

#define MIN -255
#define MAX 255

//joystick
#define inX A0
#define inY A1

int xValue;
int yValue;

void setup() {
  Serial.begin(115200);  
}

void loop() {
  xValue = analogRead(inX);
  yValue = analogRead(inY);
  Serial.print(xValue);
  Serial.print(" ");
  Serial.print(yValue);

  int sValue = map(yValue, 0, 1023, MIN, MAX);

  Serial.print(" ");
  Serial.println(sValue);

  //値が小さい場合は無視する
  if(abs(sValue) < 50) sValue = 0;

  if(sValue >= 0) {
    analogWrite(MOT_F, abs(sValue));
    analogWrite(MOT_B, 0);
  } else {
    analogWrite(MOT_F, 0);
    analogWrite(MOT_B, abs(sValue));    
  }  
}
