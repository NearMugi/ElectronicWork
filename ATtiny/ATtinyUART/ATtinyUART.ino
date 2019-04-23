#define BAUD_RATE 38400
#include <BasicSerial3.h>

// sketch to test Serial

void setup() {

}

void serOut(const char* str) {
   while (*str) TxByte (*str++);
}

void loop(){
  byte c;
  c = RxByte();
  switch(c) {
    case '1': 
      for (uint8_t i=0;i<10;i++) serOut("hoge");
      serOut("\n\r");
      break;
    default:
      TxByte(c);
  }
}
