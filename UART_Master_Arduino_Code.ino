//Master Arduino Code

void setup() {
Serial.begin(9600);  // Initialize serial communication at 9600 bits per second
}

void loop() {
Serial.println("Hello from Master!");  // Send a message
delay(1000);  // Wait for a second
}
