// #include <Arduino.h>

// unsigned long current;
//  unsigned long current2 ;
// void setup() {
  

//     pinMode(12,OUTPUT);
//     current = millis();
// }

// void loop() {
  
//   current2 = current;
//   if (millis() - current-current2 >= 1000)
//   {
//     digitalWrite(12,HIGH);
    
//     current = millis();
//   }
//   else
//   {
//     digitalWrite(12,LOW);

//   }

// }


#include <Arduino.h>

void setup() {
  DDRB = 1<<0;


}

void loop() {
  
  PORTB = 1<<0;
  delay(500);
  PORTB = 0<<0;
  delay(500);

}


