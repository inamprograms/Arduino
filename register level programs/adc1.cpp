#include <Arduino.h>
 uint16_t value;
void setup() {
    ADMUX = 0<< REFS1 | 1 << REFS0| 0<<MUX3 | 0<< MUX2 | 0<< MUX1 | 0<<MUX0;
    ADCSRA = 1 << ADEN | 1<< ADSC|1<< ADPS2 |0<< ADPS1 |0<< ADPS0;
    ADCSRB = 0<<ADTS2|0<<ADTS1|0<<ADTS0;

    value = ADCH << 8;
    value = value | ADCH;

    Serial.begin(9600);
}

void loop() { 
  
    Serial.println(value);
}