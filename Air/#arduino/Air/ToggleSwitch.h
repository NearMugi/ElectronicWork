#ifndef TOGGLE_SWITCH_H
#define TOGGLE_SWITCH_H

#define TOGGLE_SWITCH 12 //トグルスイッチのピン番号

class ToggleSwitchManage
{
  public:
    void Init();
    bool Port_Read();

  private:
    bool _on;
    int _OnCnt;
    const int ONCNT_MAX = 5;
};
#endif
