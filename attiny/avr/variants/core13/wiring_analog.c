/*
**** Core13 ***
Arduino core designed for Attiny13 and similar devices.
NO WARRANTEE OR GUARANTEES!
Written by John "smeezekitty" 
You are free to use, redistribute and modify at will EXCEPT IF MARKED OTHERWISE IN A PARTICULAR SOURCE FILE!
Version 0.20
*/
#include "wiring_private.h"
//#include "pins_arduino.h"
void analogReference(uint8_t mode){
   if(mode==INTERNAL)
      ADMUX |= _BV(REFS0);
   else
      ADMUX &= ~_BV(REFS0);
}
int analogRead(uint8_t pin){
	uint8_t l,h;
	ADMUX = (ADMUX & _BV(REFS0)) | pin & 3; //Setup ADC, preserve REFS0
	ADCSRA |= _BV(ADSC);	
	while(ADCSRA & (1<<ADSC)); //Wait for conversion
	l = ADCL;  //Read and return 10 bit result
	h = ADCH;
	return (h << 8)|l; 
}
void analogWrite(uint8_t pin, uint8_t val){
	pinMode(pin, OUTPUT); //For compatibility - STUPID! 
	if(val==0){ //Handle Off condition
		digitalWrite(pin,0);
	} else if(val == 255){ //Handle On condition
		digitalWrite(pin, HIGH);
	} else { //Otherwise setup the appropriate timer compare
		if(pin == 1){
			TCCR0A |= (1 << COM0B1);
			OCR0B = val;
		}
		if(pin == 0){
			TCCR0A |= (1 << COM0A1);
			OCR0A = val;
		}
	}
}
		
