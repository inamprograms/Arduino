#include <Arduino.h>
#include<Wire.h>  //library for i2c  . library itself sets the read/write conditions
#include "whoami.h"
//---I2C----
int a;
void alpha(){
//configuration function call insetup 
    Serial.begin(9600);
    Wire.begin();
}

void who_am_i(){
    Wire.beginTransmission(0x68); //give device address 
    delay(10);
    //to which register you want to access to read//write
    
    Wire.write(0x75); //address of who am i register (where you want to read some thing )(telling where you want to go)
    // now i want the data from this register
    Wire.requestFrom(0x68,8); //device address + 8 bit daTA  TO TAKE from the specified device address 0X68
    delay(10);
    a = Wire.read();  //TAKEing data from the specified device address 0X68 and store into a
    Wire.endTransmission();  // normally we write it ater write function
    Serial.println("Value of who am i is : ");
    Serial.println(a);
    delay(1000);
}