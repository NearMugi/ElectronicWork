// ATtiny13Aで赤外線リモコン受信

//ボードは「MicroCore」のATtiny13を使用する
// 利用パッケージ：https://github.com/MCUdude/MicroCore
// 注意： core_settings.h の#ENABLE_MICROS を有効にする必要あり
//
//                 +-Ｖ-+
// Reset      PB5 1|    |8 Vcc
// Tx,Rx      PB3 2|    |7 PB2 IR(IN)
//            PB4 3|    |6 PB1
//            GND 4|    |5 PB0
//                 +----+
//
//赤外線リモコンの通信フォーマットは以下を参考
//http://elm-chan.org/docs/ir_format.html

// シリアル通信定義
#define BAUD_RATE 38400
#include <BasicSerial3.h>

//IR受信定義
#define IR            PB2
#define IR_DDR        DDRB
#define IR_PORT       PORTB
#define IR_PININ      PINB
#define IRbitRead()   (IR_PININ&_BV(IR))   //※受信データはH/L反転で読まれる
#define RC_RDH_TS     9000    // リーダコードOFF間隔  9ms判定用
#define RC_RDL_TS     4300    // リーダコードON間隔   4.5ms判定用
#define RC_BITLOW_TS  1000    // ビットデータON間隔   1.69ms判定用  
#define RC_TMOVER     8000    // タイムオバー

#define READ_ERR 0xFFFFFFFF
#define READ_REPEAT 0xFFFF0000

#define POWER 0x001B
#define BTN_A 0x001F
#define BTN_B 0x001E
#define BTN_C 0x001A

uint32_t rc;
uint16_t custmerCode;
uint16_t readData;

uint32_t Read_IR() {
  unsigned long t ;     // 信号長計測用

  // リード部の取得
  while (IRbitRead()); // OFF検出受信待ち
  t = micros();        // OFF検出時刻取得
  while (!IRbitRead()); // ON受信検出待ち
  t = micros() - t;    // OFF->ONの時間間隔取得

  // 9ms近辺ならリーダコードとみなす
  if (t < RC_RDH_TS - 562) return READ_ERR;
  if (t > RC_RDH_TS + 562) return READ_ERR;

  t = micros();      // ON検出時刻取得
  while (IRbitRead()); // OFF検出待ち
  t = micros() - t;  // ON->OFF時間間隔取得

  //Repeatの場合、処理を抜ける
  //(閾値は曖昧にしている)
  if (t < RC_RDL_TS) return READ_REPEAT;

  //データを取得する
  uint32_t dt = 0;  // 赤外線リモコン読み取りデータ
  for (uint8_t i = 0; i < 32; i++) { //32ビット分取得ループ
    // ビット開始待ち
    while (!IRbitRead()); // ON待ち
    t = micros();
    while (IRbitRead()); // OFF待ち
    t = micros() - t;
    if (t > RC_TMOVER)
      return READ_ERR;  // エラー
    dt <<= 1;
    dt |= (t > RC_BITLOW_TS) ? 1 : 0;
  }
  return dt;
}

// 文字列出力
void serOut(const char* str) {
  while (*str) TxByte (*str++);
}

// 整数を16進数で出力
void serOutHex(uint16_t h) {
  uint8_t c;
  for (int8_t i = 12; i >= 0; i -= 4) {
    c = h >> i & 0xf;
    c = c > 9 ? c + 'A' - 10 : c + '0';
    TxByte ((uint8_t)c);
  }
}

void setup() {
  IR_DDR &= ~_BV(IR);  // IRピンのみ入力設定する
}

void loop() {
  rc =  Read_IR();  // IR受信
  if (rc == READ_ERR) return;

  if (rc != READ_REPEAT) {
    custmerCode = rc >> 16;
    readData = rc >> 8 & 0xff;
  }

  //画面に表示
  serOutHex(custmerCode);
  serOut(" ");
  serOutHex(readData);

  switch (readData) {
    case POWER:
      serOut(" POWER");
      break;
    case BTN_A:
      serOut(" A");
      break;
    case BTN_B:
      serOut(" B");
      break;
    case BTN_C:
      serOut(" C");
      break;
  }

  if (rc == READ_REPEAT) serOut(" Repeat");

  serOut("\n\r");
}
