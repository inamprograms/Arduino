#include <Arduino.h>


bool state = false;
void uartInit();

char data;

void setup() {
  // put your setup code here, to run once:
  uartInit();
}

void loop() {
  // put your main code here, to run repeatedly:

}

void uartInit(){

 //interrupt initilization 
  SREG = 1<<7;
  EIMSK = 1<<0;
  EICRA = 0<<1|1<<0;
  
  // uart inilization
  UCSR0B = 1<<4 | 1<<3 | 0<<2;
  UCSR0C = 0<<7 | 0<<6 | 1<<5 | 1<<4 | 1<<2 | 1<<1;
  UBRR0 = 103; 
}

ISR(INT0_vect){

    while(UCSR0A & 1<<7)
    {
    data = UDR0 & B11111111;
    UDR0= data & B11111111;
    UDR0='\n';
  
  }

}