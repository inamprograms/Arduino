//soft , hard , internal (1/0 will give error), external(by doing using button) interpts are types of interpt for critical apps we use interpts
#include <Arduino.h>
int ledpin = 13;
int interr = 2;  // to give button voltage
bool flag = false;

//will be called on when there is falling edge and is called interpt handeler , 
//will be excuted when falling edge like button is pressesd ,will be excuted whenever button is pressed
void test()
{
  digitalWrite(ledpin,flag);
  delay(400);
  flag = !flag;
}
void setup() {
 
  pinMode(ledpin,OUTPUT);
  pinMode(interr,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interr),test,FALLING);
}

void loop() {

  while (1)
  {
    /* code */
  }
  
}