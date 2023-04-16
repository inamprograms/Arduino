// // last day echo back task
// #include<Arduino.h>
// void uartInit();
// void datasending();
// char data;

// void setup() {
//   // put your setup code here, to run once:
//   uartInit();
// }

// void loop() {
//   // put your main code here, to run repeatedly:
// datasending();
// delay(1000);
// }

// void uartInit(){
  
//   UCSR0B = 1<<4 | 1<<3 | 0<<2;
//   UCSR0C = 0<<7 | 0<<6 | 1<<5 | 1<<4 | 1<<2 | 1<<1;
//   UBRR0 = 103; 
// }
// void datasending()
// {
//   while(UCSR0A & 1<<7)
//   {
//   data = UDR0 & B11111111;
//   UDR0= data & B11111111;
//   UDR0='\n';
//  }
//      }




#include<Arduino.h>

// void uartint();
// void datasending(char alpha);
void setup()
{

    
    
    DDRD = 0 << 2; // to receive value of interrpt
  
    DDRB = 1<<5; // to change state of led
// initilizing interrupt 
    SREG = 1 << 7 ; // to enable interrupt globally
    EIMSK = 1 << 0; // to enable interrupt at 0(INT0) bit of rigister externally at pin no 2 of port D
    EICRA = 0 << 1| 1 << 0; // for logical change and inteerrupt go to isr from logical change : register to sense the interrupt by logical change see 1 at bit 0 or 0 at bit 1 of rigister .Any true interrupt sensed

  // after that it will go to isr()


}

void loop(){


}

ISR(INT0_vect)
{
  PORTB = ~PORTB;
  // PORTB = !PORTB;
  // PORTB = 1<< 5;
  // delay(1000);
  // PORTB = 0<< 5;
  // delay(1000);
}