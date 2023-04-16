#include <Arduino.h>

#define UP_COUNT_LEVEL 781
#define DOWN_COUNT_LEVEL 7800


void setup() {
  SREG = (1 << SREG_I);
  TCCR1A =  (1 << COM1A0) ; //toggle mode :: COM1A0-> Compare Output Mode for Channel A
  TCCR1B = (1 << WGM12)|(1<< CS12)|(1<<CS10);                  // prescalar value according to formula
  TCNT1 = 0x00;                          // initilization of timer from 0,counter
  OCR1A = DOWN_COUNT_LEVEL;                             // from calcuilation of formula for 250 khz, caparator
  TIMSK1 = (1 << OCIE1A);
  DDRB = (1 << DD1);
   

}

void loop() {

  // PORTB = 1 << 9;
  // delay(1000);
  // PORTB = 0 << 9;
  // delay(1000);
}
    ISR(TIMER1_COMPA_vect)
{
    // OCR1A = 11700;  
}