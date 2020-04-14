//シフトレジスタを用いてパルス制御を行うサンプル
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
  _lmp.Init();

  FlexiTimer2::set(10, interrupt_loop);
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
  //On/Offデータを送る
  interval<4000>::run([] {
    _lmp.Update_Duty(_sh);
  });
}
