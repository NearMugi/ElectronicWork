// ATtiny13Aで赤外線リモコン受信
//
// ATMEL ATTINY13 / ARDUINO
// 利用パッケージ：https://github.com/MCUdude/MicroCore
// 注意： core_settings.h の#ENABLE_MICROS を有効にする必要あり
//
//                 +-Ｖ-+
// Reset      PB5 1|    |8 Vcc
// Tx         PB3 2|    |7 PB2 IR(IN)
// Rx         PB4 3|    |6 PB1
//            GND 4|    |5 PB0
//                 +----+
//

// シリアル通信定義
#define BAUD_RATE 38400
#include "BasicSerial3.h"
#define Tx      PB3 // (変更する場合、BasicSerial3.S修正が必要)
#define Rx      PB4 // (変更する場合、BasicSerial3.S修正が必要)

//IR受信定義
#define IR            PB2
#define IR_DDR        DDRB
#define IR_PORT       PORTB
#define IR_PININ      PINB
#define IRbitRead()   (IR_PININ&_BV(IR))
#define RC_RDH_TS     9000    // リーダコードOFF間隔  9ms判定用
#define RC_RDL_TS     3800    // リーダコードON間隔   4.5ms判定用
#define RC_BITLOW_TS  1000    // ビットデータON間隔   1.69ms判定用  
#define RC_TMOVER     8000    // タイムオバー

//
// 赤外線リモコンコード取得
// 4バイトのデータを返す
// CCCCDDdd
//    CCCC カスタムコード
//    DD   データコード
//    dd   データコードのビット反転(データチェック用)
//　ただし、
//    リピートコードの場合  0
//    エラーの場合          0xFFFFFFFF
//  を返す.
//
uint32_t Read_IR() {
  uint8_t  repeat = 0;  // リピートコード検出フラグ
  uint32_t  dt    = 0;  // 赤外線リモコン読み取りデータ
  unsigned long t ;     // 信号長計測用

  // リード部の取得
  // 受信データはH/L反転で読まれる
  while(1) {
    while(IRbitRead());  // OFF検出受信待ち   
    t = micros();        // OFF検出時刻取得
    while(!IRbitRead()); // ON受信検出待ち 
    t = micros() -t;     // OFF->ONの時間間隔取得
    if (t > RC_RDH_TS) { // 9ms以上ならリーダコードとみなす
        t = micros();      // ON検出時刻取得
        while(IRbitRead());// OFF検出待ち
        t = micros() -t;   // ON->OFF時間間隔取得
        break;
    }
  }
  
  // データ部取得
  if (t < RC_RDL_TS) {
    // 0N->OFF がリピートコードの場合、データ取得はスキップ
    repeat = 1;          
  } else {
    // 0N->OFF がリダーコードの場合、データを取得
     for (uint8_t i = 0; i <32; i++) {  //32ビット分取得ループ
        // ビット開始待ち
        while(!IRbitRead());  // ON待ち
        t = micros();
        while(IRbitRead());  // OFF待ち
        t = micros() -t;
        if (t>RC_TMOVER)
          return 0xFFFFFFFF;  // エラー
        dt<<=1;
        dt |= (t>RC_BITLOW_TS) ? 1:0;     
    }
  }
  // ストップビットの待ち
  while(IRbitRead());  // OFF待ち  
  if (repeat)
    return 0;
  return dt;
}

// 文字列出力
void serOut(const char* str) {
   while (*str) TxByte (*str++);
}

// 整数を16進数で出力
void serOutHex(uint16_t h) {
  uint8_t c;
  for (int8_t i=12; i>=0; i-=4) {
    c = h>>i & 0xf; 
    c = c >9 ? c+'A'-10: c+'0';
    TxByte ((uint8_t)c);
  }
}

void setup() {
  IR_DDR &= ~_BV(IR);  // IRピンのみ入力設定する
}

void loop() {
  uint32_t rc =  Read_IR();  // IR受信
  if (rc) {
    if (rc != 0xFFFFFFFF) {
      serOut("custom="); serOutHex(rc>>16);serOut(" ");
      serOut("data=");serOutHex(rc>>8&0xff);serOut("\n\r");
    }
  } else {
    //serOut("Repeat\n\r");
  }
}
