//VibrationMotor

#define PIN_MOTOR_1 3
#define PIN_MOTOR_2 9
#define PIN_MOTOR_3 10
#define PIN_MOTOR_4 11

//0～100%
#define RANGE_MIN 0
#define RANGE_MAX 100
//Volt
#define RANGE_V_MIN 0
#define RANGE_V_MAX_50 255 // 5.0v/5.0v * 255 = 255
#define RANGE_V_MAX_33 168 // 3.3v/5.0v * 255 = 168.3
#define RANGE_V_MAX_30 153 // 3.0v/5.0v * 255 = 153


unsigned int GetPWM(int _v) {
  long _p = map(_v, RANGE_MIN, RANGE_MAX, RANGE_V_MIN, RANGE_V_MAX_30);
  return (unsigned int)_p;
}

void setup() {
  int _max = GetPWM(100);
  analogWrite( PIN_MOTOR_1, _max);
  analogWrite( PIN_MOTOR_2, _max);
  analogWrite( PIN_MOTOR_3, _max);
  analogWrite( PIN_MOTOR_4, _max);
}

void loop() {

}
