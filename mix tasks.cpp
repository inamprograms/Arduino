// #include <arduino.h>
// int IN_PIN = A0;   // analog pin (connect it to middle terminal of potentiometer)
// int val;           // to store the value we read
// void setup() {
// //on serial monitro to display output
//     Serial.begin(9600);
//     pinMode(IN_PIN,INPUT);
// }

// void loop() {
  
// //we read on inpin a value and place in val
//   val = analogRead(IN_PIN);     // read the input pin
//   Serial.println(val);
// }



#include <arduino.h>
int LED_PIN = 11;
int LED_PINA = A0;
int ch;
int val;
void setup() {
    pinMode(LED_PIN,OUTPUT);
    pinMode(LED_PINA,INPUT);
}

void loop() {
  
  // if (Serial.available()> 0)
  // {
  //    ch = Serial.parseInt();

  // }

  //second method using potentiometer
  val = analogRead(LED_PINA);  // read the value from analog pin A0 
  analogWrite(LED_PIN,val/4);  // write the voltage to pwm, // analogRead values go from 0 to 1023, analogWrite values from 0 to 255

//first method
  // for (int  i = 0; i <=256; i++)
  // {
  //   analogWrite(LED_PIN,i);
  //   delay(500);
  // }



//no need for these
  // Serial.println("On led");
  // digitalWrite(LED_PIN,HIGH);
  // delay(1000);
  //  digitalWrite(LED_PIN,LOW);
  // delay(1000);
}