#ifndef SHIFTREGISTER_H
#define SHIFTREGISTER_H

#define PIN_LATCH 8  // ST_CP
#define PIN_CLOCK 12 // SH_CP
#define PIN_DATA  11 // DS

class ShiftRegisterManage
{
  public:
    ShiftRegisterManage();
    void Init();
    void SendData(byte b);
    
};

#endif
