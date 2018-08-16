#ifndef POTENTIOMETER_H
#define POTENTIOMETER_H



#define STATUS_INIT 0
#define STATUS_CALIBRATION_CENTER 1
#define STATUS_CALIBRATION_MIN 2
#define STATUS_CALIBRATION_MAX 3
#define STATUS_ANALYSIS 4

class PotentioMeterManage
{
  public:
    int NowStatus;
    
    PotentioMeterManage();
    void Port_Init(int pin);
    void Port_Read();

    void SetAnalog_min(int v);
    void SetAnalog_max(int v);
    void SetAnalog_center(int v);

    void SetDigitalValue();
    void SetDigitalValue_ave();
    
    int GetLastAnalogValue();
    float GetdigitalValue();

    int GetanalogValue_ave();
    float GetdigitalValue_ave();
    
  private:
    int PIN;
    
    //実データ
    static const int aveCnt = 10;
    int analogValue[aveCnt]; //最新データは末尾に入っている
    float digitalValue;
    
    //平均
    int analogValue_ave;
    float digitalValue_ave;

    int ANALOG_MIN;
    int ANALOG_MAX;
    int ANALOG_CENTER;

    float DIGITAL_MIN = -10.0f;
    float DIGITAL_MAX = 10.0f;
    float DIGITAL_CENTER = 0.0f;

    float chgAnalogToDigital(int v);
};





#endif
