
#include<Arduino.h>


void setup()
{
  Serial.begin(9600);
    DDRD = 0 << 2; 
    SREG = 1 << 7 ;
    EIMSK = 1 << 0; 
    EICRA = 0 << 1| 1 << 0; 
}

void loop(){
  Serial.println("z");
  delay(2000);
}

ISR(INT0_vect)
{
  Serial.println("I");
  delay(2000);
}