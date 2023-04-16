#include <Arduino.h>
void uartInit();
void datasending(char data);
void setup() {
  
  uartInit();
}

void loop() {
  
datasending('z');
datasending('\n');
delay(1000);
}

void uartInit(){
  UCSR0B = 1<<3 | 0<< 2;
  UCSR0C = 0<<7 | 0<<6 | 0<<5 | 0<<4 | 1<<2 | 1<<1;
  UBRR0 = 103; 
}
void datasending(char data)
{
  UDR0 = data;
  // while (!(UCSR0A & 1<<6))
  // {
     
  // }
  
}