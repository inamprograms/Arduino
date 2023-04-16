#include <Arduino.h>
 uint16_t adcValue;
 uint8_t lval = 0 ; // variable should be volatile
void setup() {

    Serial.begin(9600);
    SREG =1<<7; // enable global interrupt

    ADMUX = 0<< REFS1 | 1 << REFS0|0<<ADLAR| 0<<MUX3 | 0<< MUX2 | 0<< MUX1 | 0<<MUX0; 
    //REFS1:0: Reference voltage Selection Bits, Bits 3:0 – MUX3:0: Analog Channel Selection Bits
    ADCSRA = 1 << ADEN | 1<< ADSC|1<<ADATE | 1 << ADIE|1<< ADPS2 |0<< ADPS1 |0<< ADPS0;
    //Bit 7 – ADEN: ADC Enable, Bit 6 – ADSC: ADC Start Conversion ,Bit 5 – ADATE: ADC Auto Trigger Enable, Bit 3 – ADIE: ADC Interrupt Enable,Bits 2:0 – ADPS2:0: ADC Prescaler Select Bits
    ADCSRB = 0<<ADTS2|0<<ADTS1|0<<ADTS0;
    // Bit 2:0 – ADTS2:0: ADC Auto Trigger Source

    //  value = ADCH << 8;
    // value = value | ADCH;

}

void loop() { 
  
    // Serial.println(value);
}

ISR(ADC_vect){
  // lval = ADCL;
  // adcValue = (ADCH << 8) | lval;
  // Serial.println(adcValue);

  Serial.println(ADC);

}