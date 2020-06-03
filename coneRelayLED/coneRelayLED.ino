//円錐回転するLED基板を点灯する
#include "interval.h"
#include <FlexiTimer2.h>
#include "ShiftRegister.h"
#include "Lump.h"
ShiftRegisterManage _sh;
LumpManage _lmp;

void setup()
{
  Serial.begin(115200);

  _sh.Init();
  _lmp.Init('1');

  FlexiTimer2::set(1, interrupt_loop);
  FlexiTimer2::start();
}

//割り込み処理
void interrupt_loop()
{
  //Lumpパターンを更新する
  _lmp.Update_LumpPtn();
}

void loop()
{
  if (Serial.available() > 0)
  {
    char _tmp = Serial.read();
    _lmp.Init(_tmp);
  }

  //On/OffデータをShiftRegister送る
  interval<4000>::run([] {
    _lmp.Update_Duty(_sh);
  });
}
