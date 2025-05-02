int sensorPin = A0;
float temperature;
void setup() {
Serial.begin(9600);
}
void loop() {
int reading = analogRead(sensorPin);
// Convert the analog reading to voltage
float voltage = reading * (5.0 / 1023.0); // 0–1023 maps to 0–5V
//if you use a 3.3 V board in Arduino or Esp32 use reading * (3.3/1023)
// LM35 gives 10mV per °C => 0.01V per °C
temperature = voltage / 0.01;
Serial.print("Temperature: ");
Serial.print(temperature);
Serial.println(" °C");
delay(1000);
}
