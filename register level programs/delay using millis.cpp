// #include <Arduino.h>
// unsigned long current;
// void setup() {
  
//     pinMode(12,OUTPUT);
// }

// void loop() {

//     if (millis() - current == 1000)
//     {
//         digitalWrite(12,HIGH);
//         current = millis();
//     }      
// }




/*  Assignment 14: Create function for delay using millis() and 
bilk led using this function- Blink 2 lEDS using millis functions*/

#include<Arduino.h>
// to store previous time as unsigned long as time can exceed from the range of int and can be negative
unsigned long prevTime =0;
//to store current time from millis function that is taking time from controller timer
unsigned long currTime;
//storing the state of led
int ledState = LOW;
void setup()
{
  //setting pin 12 for output / setting voltage direction as output on pin 12
    pinMode(12,OUTPUT);
    // pinMode(8,OUTPUT);
  
  // DDR is register name for direction of voltage and B is port name , left shifting a bit 1 to zeroth bit(pin no. 8) of the register
    // DDRB = 1 << 0;
    // DDRB = 1 << 4;

}
void loop()
{

    currTime = millis();
    //check if difference between the current time and previous time is greater than or equals to the interval
    // we have set
    if (currTime - prevTime >= 1000)
    {
          digitalWrite(12,ledState);
          prevTime = currTime;
          ledState = !ledState;
          // if the LED is OFF turn it ON and vice versa
          // if (ledState == LOW)
          // {
          //     ledState = HIGH;
          // }
          // else
          // {
          //     ledState = LOW;
          // }
    }

    // digitalWrite(12,ledState);
    // digitalWrite(8,ledState);

    // PORT is register name  to set HIGH/LOW voltage or to ON/OFF led and B is port name , left shifting a bit 1 to zeroth bit(pin no. 8) of the register
    // PORTB = ledState << 0;
    // PORTB = ledState << 4;

}
















