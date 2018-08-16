#ifndef PHOTOELECTRIC_SENSOR_H
#define PHOTOELECTRIC_SENSOR_H

#define PHOTO_SENSOR 11 //光電センサのピン番号

class PhotoelectricSensorManage
{
  public:
    void Init();
    void Set_isEnable(bool _sw);
    bool Get_isEnable();
    bool Port_Read();
  private:
    bool isEnable;
    bool _on;
    int _OnCnt;
    const int ONCNT_MAX = 3;
};
#endif
