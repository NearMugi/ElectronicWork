//赤外線センサーを使う
#include <IRremote.h>
int recvPin = 11;
IRrecv irrecv(recvPin);

String code;
#define ptnPower "8f71be4"
#define ptnA "8f71fe0"
#define ptnB "8f71ee1"
#define ptnC "8f71ae5"

void setup()
{
  Serial.begin(115200);
  irrecv.enableIRIn();
}

void ircode(decode_results *results)
{
  // Panasonic has an Address
  if (results->decode_type == PANASONIC)
  {
    code = String(results->address, HEX);
  }
  code = String(results->value, HEX);
}

void dumpInfo(decode_results *results)
{
  // Check if the buffer overflowed
  if (results->overflow)
  {
    Serial.println("IR code too long. Edit IRremoteInt.h and increase RAWBUF");
    return;
  }

  if (results->bits > 0)
  {
    ircode(results);

    Serial.print(code);
    if (code == ptnPower)
      Serial.print(" POWER");
    if (code == ptnA)
      Serial.print(" A");
    if (code == ptnB)
      Serial.print(" B");
    if (code == ptnC)
      Serial.print(" C");

    Serial.println("");
  }
}

void loop()
{
  decode_results results; // Somewhere to store the results

  if (irrecv.decode(&results))
  {                     // Grab an IR code
    dumpInfo(&results); // Output the results
    irrecv.resume();    // Prepare for the next value
  }
}
