//ASSIGNMENT 13: reading a string through the serial read function


#include <Arduino.h>
int i=0;
int j = 0;
static char incomingBytes[6] ={0} ;
void setup() {
  //to start communication with Arduino device at 9600 rate/speed
  Serial.begin(9600);
}

void loop() {

      // while loop is for reading string
      // Serial.available()>0 -> condition will check weather device is attached and any data is there
      while(Serial.available()>0)
      {
        //if condition true then reading the incoming value and storing value into incomingBytes one by one
        
        incomingBytes[i] = Serial.read();
        i++; 
        
      }

      //printing the value we have read
      if (incomingBytes !='\0' && )
      {
         Serial.println(incomingBytes);
         delay(500);
      }
      incomingBytes[6] ={0} ;

  }
