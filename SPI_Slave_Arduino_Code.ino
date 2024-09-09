//Code for the Slave board:
#include <SPI.h>
const int slaveSelectPin = 10;
void setup() {
  SPI.begin(115200);
  pinMode(slaveSelectPin, OUTPUT);
}

void loop() {
  if (digitalRead(slaveSelectPin) == LOW) {
    char receivedData = SPI.transfer('L');
    Serial.println(receivedData);
  }
}