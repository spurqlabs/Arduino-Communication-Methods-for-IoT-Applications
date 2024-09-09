//Code for the master board:
#include <SPI.h>
const int slaveSelectPin = 10;
void setup() {
  SPI.begin(115200);
  pinMode(slaveSelectPin, OUTPUT);
}

void loop() {
  digitalWrite(slaveSelectPin, LOW);
  SPI.transfer('H');
  digitalWrite(slaveSelectPin, HIGH);
  delay(1000);
}