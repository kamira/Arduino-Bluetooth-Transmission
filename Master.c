#include <SoftwareSerial.h>
SoftwareSerial BT(10, 11); // RX, TX

void setup(){
  Serial.begin(38400);
  Serial.println("Goodnight moon!");
  // mySerial.begin(115200);
  BT.begin(38400);
  delay(2000);
  BT.write("AT+init\r\n");
  
  delay(1000);
}

void loop(){
  if (BT.available())
    Serial.write(BT.read());
  if (Serial.available())
    BT.write(Serial.read());
}
