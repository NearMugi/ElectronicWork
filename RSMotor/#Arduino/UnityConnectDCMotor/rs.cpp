#include "Arduino.h"
#include "rs.h"

//コンストラクタ
rs::rs() {}

void rs::Setup_Init(int _type) {
  pinMode(PIN_MOTOR, OUTPUT);
  pinMode(PIN_MOTOR_DEBUG, OUTPUT);

  _pulse_range_min = 0;
  _pulse_range_max = 0;
  switch (_type) {
    case MOTOR_RS540:
      _pulse_range_min = PULSE_RANGE_RS540_MIN;
      _pulse_range_max = PULSE_RANGE_RS540_MAX;
      break;
    case MOTOR_RS380:
      _pulse_range_min = PULSE_RANGE_RS380_MIN;
      _pulse_range_max = PULSE_RANGE_RS380_MAX;
      break;
  }
}

unsigned int rs::ChgSpeedToPulse() {
  return map(_nowSpeed, SPEED_RANGE_MIN, SPEED_RANGE_MAX, _pulse_range_min, _pulse_range_max);
}

//条件をリセットする　※「停止」状態のパルスを送る
void rs::SetReady() {
  _nowSpeed = SPEED_RANGE_INIT;
  _targetSpeed = SPEED_RANGE_INIT;
  _oneTime_on = ChgSpeedToPulse();
  _isOn = false;
  _oneTime_on = 0;
  _oneTime = 0;
  _isOnePlay = true;

  pulseOff();
}

void rs::SetSpeed() {
  if (_nowSpeed != _targetSpeed) {
    if (_targetSpeed > 0) {
      _nowSpeed += SPEED_DELTA;
      if (_nowSpeed >= _targetSpeed) {
        _nowSpeed = _targetSpeed;
      }
    } else {
      _nowSpeed -= SPEED_DELTA;
      if (_nowSpeed <= _targetSpeed) {
        _nowSpeed = _targetSpeed;
      }
    }
  }

  _oneTime_on = ChgSpeedToPulse();
}

void rs::SetTargetSpeed(int _t) {
  _targetSpeed = _t;
  if (_targetSpeed > SPEED_RANGE_MAX) _targetSpeed = SPEED_RANGE_MAX;
  if (_targetSpeed < SPEED_RANGE_MIN) _targetSpeed = SPEED_RANGE_MIN;
}

void rs::Interrupt(int intTime) {

  //1周期終了時にON時間を変更する
  if (_isOnePlay) {
    //現在スピードを目標スピードに近づけていく
    SetSpeed();

    _isOnePlay = false;
    Debug_OneTime_On = 0;
  }

  _isOnePlay = playOnOff(_status, intTime);
}

void rs::pulseOn() {
  digitalWrite(PIN_MOTOR, PULSE_ON);
  digitalWrite(PIN_MOTOR_DEBUG, PULSE_ON);
}
void rs::pulseOff() {
  digitalWrite(PIN_MOTOR, PULSE_OFF);
  digitalWrite(PIN_MOTOR_DEBUG, PULSE_OFF);
}

bool rs::is_targetSpeed_ZERO(){
  if(_targetSpeed == 0) return true;
  return false;
}

//パルスの生成
//常にパルスを送る
//止めると割込み処理の挙動がおかしくなる
volatile bool rs::playOnOff(byte _status, int intTime) {
  bool _isOneLoopEnd = false;

  _oneTime += intTime;
  if (_oneTime < PULSE_ONE_LOOP) {
    if (_oneTime < _oneTime_on) {
      _isOn = true;
      Debug_OneTime_On += intTime;
    } else {
      _isOn = false;
    }

  } else { //1周期終了
    Debug_OneTime = _oneTime;
    _isOn = false;
    _oneTime = 0;
    _isOneLoopEnd = true;
  }

  if(_isOn) {
      pulseOn();    
  } else {
      pulseOff();    
  }

  return _isOneLoopEnd;
}

bool rs::CreateSendData_isOn() {
  return _isOn;
}
bool rs::CreateSendData_isNormalRotation() {
  if(_nowSpeed >= 0) return true;
  return false;
}

int rs::Get_targetSpeed(){
  return _targetSpeed;
}

void rs::Debug_SetTargetSpeed() {

  Serial.print(_nowSpeed);
  Serial.print(" : ");
  Serial.print(_oneTime_on);
  Serial.print(" : ");
  Serial.print(SPEED_DELTA);
  Serial.print(" : ");
  Serial.print(Debug_OneTime);
  Serial.print(" : ");
  Serial.print(Debug_OneTime_On);
  Serial.print(" : ");

  Serial.println(" ");

  int _tmpSpeed;
  if (Serial.available()) {
    char _tmp = Serial.read();
    switch (_tmp) {
      case '1':
        SetReady();
        break;

      case '2':
        _tmpSpeed = _nowSpeed + 1;
        SetTargetSpeed(_tmpSpeed);
        break;

      case '3':
        _tmpSpeed = _nowSpeed + 10;
        SetTargetSpeed(_tmpSpeed);
        break;

      case '4':
        _tmpSpeed = _nowSpeed - 1;
        SetTargetSpeed(_tmpSpeed);
        break;

      case '5':
        _tmpSpeed = _nowSpeed - 10;
        SetTargetSpeed(_tmpSpeed);
        break;

      default:
        return;
        break;

    }
  }
}

