#include <Arduino.h>

/* Blink LED by toggling (ON/OFF) button */
void setup() {


//bits per second, data transmission rate, data flow speed-> baudrate-> should be same of two devices
  Serial.begin(9600);

  pinMode(13,OUTPUT);   //for led
  pinMode(2,INPUT);    //for button
}

void loop() {
  

  //reading the state of the button, saving the value we have read into variable
  bool state = digitalRead(2);

  if (state == HIGH)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
  
}

/*  Blink LED at Pin 13  */
int pin =13;    
void setup()
{
  pinMode(pin,OUTPUT);    
}

void loop()
{

  digitalWrite(pin,HIGH);
  delay(1000);
  digitalWrite(pin,LOW);
  delay(1000);

}