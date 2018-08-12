#include <SoftwareSerial.h>
SoftwareSerial BT(10, 11); // RX, TX

void setup(){
  Serial.begin(38400);
  Serial.println("Goodnight moon!");
  BT.begin(38400);
  setupBT();
}

void loop(){
  if (BT.available())
    Serial.write(BT.read());
  if (Serial.available(){
    setupBT();
    BT.print(Serial.read());
  }
}

void setupBT(){
  delay(2000);
  BT.write("at+init\r\n");
  delay(2000);
  BT.write("at+link=12,6,147496\r\n");
}
