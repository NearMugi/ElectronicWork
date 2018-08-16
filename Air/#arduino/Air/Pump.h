#ifndef PUMP_H
#define PUMP_H

#define PIN_PUMP 10 //ポンプのピン番号

#define PUMP_ON HIGH
#define PUMP_OFF LOW

#define PUMP_CONTINUETIME 100000000 //ポンプの連続可動時間(us) 100秒

class Pump
{
  public:
    void Init(bool _isUseToggleSwitch);
    void Set_isPlay(bool _sw);
    bool Get_isPlay();
    void UpdateOnOff(int _addTime);

  private:
    bool isOn;
    bool isUseToggleSwitch;
    long _time_pump_on; //ポンプがON状態の時間(us)

};

#endif
