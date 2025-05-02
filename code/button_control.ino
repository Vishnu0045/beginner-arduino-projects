int buttonPin = 2;
int ledPin = 13;
int buttonState = 0;
void setup() {
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);
}
void loop() {
buttonState = digitalRead(buttonPin);
if (buttonState == HIGH) {
digitalWrite(ledPin, HIGH); // Turn on LED
} 
else {
digitalWrite(ledPin, LOW); // Turn off LED
}
}
