//Slave Arduino Code:

void setup() {
Serial.begin(9600);  // Initialize serial communication at 9600 bits per second
}

void loop() {
if (Serial.available() > 0) {  // Check if data is available to read
String message = Serial.readString();  // Read the incoming data
Serial.println("Received: " + message);  // Print the received message
}
}
