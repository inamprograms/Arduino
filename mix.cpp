//  14-04-2022

//ASSIGNMENT 13: reading a string through the serial read function classwork
// #include <Arduino.h>

// char incomingBytes[6] = {0};
// void setup() {
//   // put your setup code here, to run once:
//   Serial.begin(9600);


// }

// void loop() {
//   // put your main code here, to run repeatedly:

// //device is there and sending some daTA is coming OR NOT Serial.available()
//   if (Serial.available()>0)
//   {


//     for (int i =0; i<6; i++)
//     {
//       incomingBytes[i] = Serial.read();
//       delay(500);
    
//     }  
    
//     //reading the incoming value and storing into incomingBytes
//   }

//   for (int i = 0; i < 6; i++)
//   {
//     if (incomingBytes[i] >0)
//       {
//         Serial.print(incomingBytes[i]);
//         delay(500);
//       }
    
//   }
  

// }









//ASSIGNMENT 13: reading a string through the serial read function classwork

//reading a string through the serial read function
// #include <Arduino.h>
// int i=0;
// int j = 0;
// char incomingBytes[6] ={0} ;
// // String incomingBytes1 ;

// void setup() {
//   Serial.begin(9600);
// }

// void loop() {

  

// //device is there and sending some daTA is coming OR NOT Serial.available()
//       while(Serial.available()>0)
//       {
//         //reading the incoming value and storing into incomingBytes
//         incomingBytes[i] = Serial.read();
//         i++;
//       }

// // if (i<6)
// // {
// //   delay(1000);
// // }
//     for (int i =0; i<6; i++)
//     {
//         if (incomingBytes[i] > 0)
//         {
//           Serial.print(incomingBytes[i]);
//           j++;
//         }
//     }  
//     Serial.print("\n");
//   }

 
  
  



      
    
    



//blink light by pressing n 
#include<Arduino.h>
char on ='\0';
// char onOff[3] = {0};
// int i=0;
void setup()
{
  Serial.begin(9600);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);

}

void loop()
{

  //  while(Serial.available()>0)
  //   {
        
  //       onOff[i] = Serial.read();
  //       i++;
  //   }
  
  if (Serial.available()>0)
  {
    on = Serial.read();
  }

  if (on =='y')
  {
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    delay(100);
  }

  if (on == 'n')
  {

     digitalWrite(12,LOW);
    digitalWrite(13,LOW);
   
  }
  // if (onOff == "on")
  // {
  //   digitalWrite(12,HIGH);
  //   delay(100);
  //   digitalWrite(12,LOW);
  //   delay(100);
  //   digitalWrite(13,HIGH);
  //   delay(100);
  //   digitalWrite(13,LOW);
  //   delay(100);
  // }

  // if (onOff == "off")
  // {

  //    digitalWrite(12,LOW);
  //   digitalWrite(13,LOW);
   
  // }
}










//ASSIGNMENT 13: reading a string through the serial read function


// #include <Arduino.h>
// #include<string.h>
// int i=0;
// int j = 0;
// char incomingBytes[6] ={0} ;
// void setup() {
//   //to start communication with ardino device at 9600 rate/speed
//   Serial.begin(9600);
// }

// void loop() {

//       // while loop is for reading string
//       // Serial.available()>0 -> condition will check weather device is attached and any data is there
//       while(Serial.available()>0)
//       {
//         //if condition true then reading the incoming value and storing value into incomingBytes one by one
//         incomingBytes[i] = Serial.read();
//         i++;
//       }
//      //printing the value we have read
//     if (incomingBytes > 0)
//           {
//              Serial.println(incomingBytes);
//              delay(500);
     
//           }

//   }