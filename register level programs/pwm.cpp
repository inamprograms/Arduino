#include <Arduino.h>

void setup() {
  DDRD =1<<6;
    TCCR0A = 1<<7|1<<6|1<<1|1<<0;  // (if pwm then) check go to 255,can change duty cycle  but we can not change duty cycles in non pwm mode
    TCCR0B = 0<<3|1<<2|0<<1|0<<0; // in B case toggle will done at specified value and comparison will be go on in A till 255, to generate wave of my own required duty cycle
    OCR0A =255; // 
}

void loop() {
  

}