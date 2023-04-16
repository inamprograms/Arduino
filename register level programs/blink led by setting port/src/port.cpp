// #include<Arduino.h>
// #include"port.h"
// void blink()
// {
//     // int flag = 0;
//     // if (flag == 0)
//     // {
       
//     //     DDRB = 1<<5;
//     //     flag++;
//     // }
    
    
//     // PORTB = 1<<5;
//     // // delay(100);
//     // // PORTB = 0<< 5;
//     // // delay(200);

//     DDRB = 1<<5;
//     while (1)
//     {
//         PORTB = 1<<5;
//         delay(100);
//         PORTB = 0<< 5;
//         delay(200);
//     }

//     // for (;;)
//     // {
//     //     // infnite loop
//     // }
    
    


// }


// #include<Arduino.h>
// #include"port.h"
// void blink()
// {
//     Serial.println("Hello");
// }


#include<Arduino.h>
// #include"port.h"
int flag = 0;
void blink(int pin)
{
   
    if (flag == 0)
    {
       
        DDRB = 1<<pin;
        // pinMode(pin,OUTPUT);
        flag++;
    }
    
    
    PORTB = 1<<pin;
    delay(100);
    PORTB = 0<< pin;
    delay(200);
}


// #include<Arduino.h>

// int flag = 0;
// void adc()
// {

//     if (flag == 0)
//     {
//       Serial.begin(9600);
//     SREG =1<<7;
//     ADMUX = 0<< REFS1 | 1 << REFS0|0<<ADLAR| 0<<MUX3 | 0<< MUX2 | 0<< MUX1 | 0<<MUX0; 
    
//     ADCSRA = 1 << ADEN | 1<< ADSC|1<<ADATE | 1 << ADIE|1<< ADPS2 |0<< ADPS1 |0<< ADPS0;
   
//     ADCSRB = 0<<ADTS2|0<<ADTS1|0<<ADTS0; 
//     flag++;
//     }
    



// }

// ISR(ADC_vect)
// {
//   Serial.println(ADC);
// }


