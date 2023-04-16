#include <Arduino.h>
#include<Wire.h>
int a;
void setup() {
   Serial.begin(9600);
    Wire.begin();
}

void loop() {
  
   Wire.beginTransmission(0x68); //whoami address
    delay(10);
    
    
    Wire.write(0x75); //master wiill write at this 
    
    Wire.requestFrom(0x68,8); 
    delay(10);
    a = Wire.read();  
    Wire.endTransmission();  
    Serial.println("Value of who am i is : ");
    Serial.println(a,HEX);
    delay(1000);
}