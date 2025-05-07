const int red = 8;
const int yellow = 9;
const int green = 10;
void setup() {
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);
}
void loop() {
// RED ON, others OFF
digitalWrite(red, HIGH);
digitalWrite(yellow, LOW);
digitalWrite(green, LOW);
delay(3000); // Red for 3 seconds

// YELLOW ON, others OFF
digitalWrite(red, LOW);
digitalWrite(yellow, HIGH);
digitalWrite(green, LOW);
delay(1000); // Yellow for 1 second
// GREEN ON, others OFF
digitalWrite(red, LOW);
digitalWrite(yellow, LOW);
digitalWrite(green, HIGH);
delay(3000); // Green for 3 seconds
}
