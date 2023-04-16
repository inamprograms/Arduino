
// int IN_PIN = A0;
// int val;
// int i = 0;

int LED_PIN = 9;

void setup() {
 
 //  pinMode(IN_PIN,INPUT);
//   Serial.begin(9600);

    Serial.begin(9600); 
    pinMode(LED_PIN,OUTPUT);
}

void loop() {
  

  //  we read on inpin a value and place in val
 //   val = analogRead(IN_PIN);
//   Serial.println(val);

   for (int  i = 0; i <=256; i++)
   {
     analogWrite(LED_PIN,i);
     delay(10);
   }
}
