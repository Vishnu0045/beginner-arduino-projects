void setup() {
pinMode(13, OUTPUT); // Set pin 13 as output
}
void loop() {
digitalWrite(13, HIGH); // Turn on LED
delay(1000); // Wait 1 second
digitalWrite(13, LOW); // Turn off LED
delay(1000); // Wait 1 second
}
