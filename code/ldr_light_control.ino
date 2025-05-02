int ldrPin = A0; // LDR connected to analog pin A0
int ledPin = 9; // LED connected to digital pin 9
int ldrValue = 0;
void setup() {
pinMode(ledPin, OUTPUT); // Set LED pin as output


Serial.begin(9600); // Initialize serial communication for monitoring
}
void loop() {
ldrValue = analogRead(ldrPin); // Read the value from the LDR
Serial.println(ldrValue); // Print the light level to the serial monitor
if (ldrValue < 500) { // Threshold for darkness (can be adjusted)
digitalWrite(ledPin, HIGH); // Turn on LED when it's dark
} else {
digitalWrite(ledPin, LOW); // Turn off LED when it's bright
}
delay(500); // Wait for half a second before reading again
}
