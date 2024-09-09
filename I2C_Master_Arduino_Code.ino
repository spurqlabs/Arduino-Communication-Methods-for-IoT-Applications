//Master Arduino Code

#include <Wire.h>
void setup() {
  Wire.begin();  // Join I2C bus as master
}
void loop() {
 Wire.beginTransmission(8);  // Begin transmission to device with address 8
 Wire.write("Hello from Master!");  // Send a message
 Wire.endTransmission();  // End transmission
 delay(1000);  // Wait for a second
}
