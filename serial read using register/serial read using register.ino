#include <Arduino.h>
char name[20] ={0};
bool isComplete = false;
char ch;
void setup() {
 
  UCSR0A = 0x00;
  UCSR0B = 0x18;
  UCSR0C = 0x06;
  UBRR0 = 103;

}
int i=0;
void loop() {
  

  //checking if user has send some datA OR not if data is available then put data into 
  //we are getting data from user , i am just receiving data 
  if (UCSR0A &(1<<7))
  {
    ch = UDR0;
    if (ch == '\n')
    {
        name[i] = ch;
        i=0;
        isComplete = true;
    }
    else
    {
      name[i] = ch;
      i++;
    }
    
    
  }
  
int j =0;
  if (isComplete)
  {
    while (name[j] != '\n')
    {
      if (UCSR0A & (1<<5))
      {
        UDR0 = name[j++];
      }
      
    }
    //when all data is transmitted then wo do this
    UDR0 = '\n';
    isComplete = false;
    memset(name,0,10);
    
  }
  
}
