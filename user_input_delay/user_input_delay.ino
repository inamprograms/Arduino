int led = 13;

int ch;
void setup() {
  
  Serial.begin(9600);
  pinMode(led,OUTPUT);

}

void loop() {
  
  if(Serial.available()>0)
  {
    ch = Serial.read();
    Serial.println(ch);
    
    }

  digitalWrite(led,HIGH);
  delay(ch);
  digitalWrite(led,LOW);
  delay(ch);
}
