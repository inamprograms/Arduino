#include <Arduino.h>

void setup() {
 
    DDRD = 0 << 2;
    DDRB = 1 << 5;
    EICRA = 0 << 1 | 1 << 0;
    EIMSK = 1<< 0;

}

void loop() {
  
}

ISR(INT0_vect)
{
  PORTB = ~PORTB;

}