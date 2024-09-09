//Slave Arduino Code:

#include <Wire.h>

void setup() {
  Wire.begin(8);  // Join I2C bus with address 8
  Wire.onReceive(receiveEvent);  // Register a function to be called when data is received
}

void loop() {
// Do nothing, everything is handled in receiveEvent
}
void receiveEvent(int howMany) {
  while (Wire.available()) {  // Loop through all received bytes
    char c = Wire.read();  // Read each byte
    Serial.print(c);  // Print the received message
  }
  Serial.println();
}
