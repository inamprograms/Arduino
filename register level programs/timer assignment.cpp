#include <Arduino.h>
int counter;
void setup() {
  SREG = 1<<7; //enable global interrupt
  DDRB =1<<5;  // set direction at pin 6(pwm)
  TCCR0A = 1<<7|1<<6|1<<1|1<<0;   //  enable non inverting mode fast pwm mode
  TCCR0B = 0<<3|0<<1|0<<1|1<<0 ; // setting 64 prescalar;|1<<2|0<<1|0<<0;
  OCR0A = 45;  // fading value 
  TIMSK0 = 1<<1;  //glabal timer interrupt

}

void loop() {
  


}
//Task : 26-05-2022

ISR(TIMER0_COMPA_vect){

  counter++;
  if (counter >1000)
  {
    PORTB ^=1<<5;
    counter =0;
    
  }
  
}