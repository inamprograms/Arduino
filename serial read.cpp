#include <Arduino.h>
const unsigned int length = 12;
const unsigned int messg_pos= 0;
char message[length] = {0};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available()>0 && Serial.available() != '\n' )
  {
      message[messg_pos] = Serial.read();
      messg_pos++ ;
  }

  if (message !='\0' && messg_pos < length-1 )
  {
      Serial.println(message);
  }
  
  
}   