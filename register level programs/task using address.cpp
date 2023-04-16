// Task of using address

// // #include <Arduino.h>

// // void setup() {
// //   DDRB = 1 << 13;
// // }

// // void loop() {
// //   PORTB = 1 << 5;
// //   (0x05)(0x25)=  1 << 5;
// // }


// #include<Arduino.h>
// // #define CLR(x,y) (x&=(~(1<<y))) // set HIGH
// // #define SET(x,y) (x|=(1<<y)) // SEL LOW

// // #define DDRB_test (*(volatile uint8_t *)(0x24))
// // #define PORTB_test (*(volatile uint8_t *)(0x25))

//   volatile uint8_t *DDRB_test = &DDRB;
//   volatile uint8_t *PORTB_test = &PORTB;

// void setup() {
//   *DDRB_test = 1 << 5; // set as output
//   }

// void loop() {


//   *PORTB_test = 1<<5;
//   delay(100);
//   *PORTB_test = 0<<5;
//   delay(100);



//   // PORTB_test = 1 << 5;
//   // delay(1000);
//   // PORTB_test = 0 << 5;
//   // delay(1000);

//   // PORTB = 1 << 5;
//   // delay(1000);
//   // PORTB = 0 << 5;
//   // delay(1000);

//   // SET(PORTB,5);  // pin 13 HIGH
//   // delay(1000);
//   // CLR(PORTB,5); // pin 13 LOW
//   // delay(1000);
// }




// #include<Arduino.h>

//   volatile uint8_t *DDRB_test = &DDRB;
//   volatile uint8_t *PORTB_test = &PORTB;

// //   int *DDRB_test = (0x24);
// //   volatile uint8_t *PORTB_test = (0x25);
  

// void setup() {
//   *DDRB_test = 1 << 5; 
//   }

// void loop() {


//   *PORTB_test = 1<<5;
//   delay(100);
//   *PORTB_test = 0<<5;
//   delay(100);
// }

// #include<Arduino.h>
// void setup() {
  
// }
// void loop() {
  
// }

