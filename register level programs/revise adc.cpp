#include <Arduino.h>

void setup() {
  Serial.begin(9600);
    SREG = 1<< 7;
    ADMUX = 0<<7|1<<6|0<<3|0<<2|0<<1|0<<0;                               // to select channel
    ADCSRA = 1<<7|1<<6|1<<5|1<<3|1<<2|0<<1|0<<0;  //enable ADC, free mode, interrupt , 
    ADCSRB = 0<<2|0<<1|0<<0;     // to run in free running mode
}

void loop() {
  // put your main code here, to run repeatedly:
}


ISR(ADC_vect)
{
  Serial.println(ADC);
}