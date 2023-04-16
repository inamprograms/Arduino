// #define __port_h
// #ifdef  __port_h

// //we declare all fuctions here

// // void blink();





// #endif
// // if wee declare anthing below it will also run but behaviour will not be according to our will this is also in functions
// are called include guards (#define, #ifdef ,#endif)
// #ifndef __port_h // if not defined then define it then functions in it will be declared
#define __port_h //if defined port h then  functions in it will be declared
#ifdef  __port_h
void blink(int pin);

#endif



// #define __port_h
// #ifdef  __port_h

//     void adc();
// #endif


