#include <Arduino.h>

const int pin = 39;
int value ;
float voltage = 0;

void setup() {
  Serial.begin(9600);
  
}

void loop() {
  value = analogRead(pin);    // value is b/w 0-4095 depending on voltage(3.3) that are changing by potentiometer 
  voltage = (3.3/4095.0) * value;
  Serial.print("Value: ");
  Serial.println(value);

  Serial.print("Voltage: ");
  Serial.println(voltage);
  delay(1000);
}