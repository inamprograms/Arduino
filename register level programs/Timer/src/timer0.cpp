#include"timer0.h"
#include<Arduino.h>
struct timer0 obj;  //obj is timerValue
void timerinit()
{
    pinMode(6,OUTPUT); //we get toogle wave at pin 6 (output)
    // DDRB = 1<<5;
    TCCR0A =0<<7|1<<6| 1<<1 | 0<<0;  // first two enable toogle , use also set from table on 7,6 bit,ctc mode enable last two
    TCCR0B = 0 <<3| 0<<2|1<<1|1<<0;  // prescalar set
    OCR0A = 128; // compare register set
    SREG = 1<<7;//global interrupt enable
    TIMSK0 = 1<<1; //OCR0A and  interrupt enable



}

// ISR(TIMER0_COMPA_vect)
// {
//     //i have set OCR0A =  128 and time is 32microseconds to reach at 128 from 0  , so we cant detect toggle so we will use counter 
//     obj.counter++;  //can be used as delay
//     // TCNT0 = 0*00; 
//     if (obj.counter > 100)
//     {
//         PORTB ^= 1<<5;
//         obj.counter = 0;
        
        
//     }
    

// }