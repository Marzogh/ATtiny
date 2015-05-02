/*
*** Core13 ***
Arduino core designed for Attiny13 and similar devices.
NO WARRANTEE OR GUARANTEES!
Written by John "smeezekitty" 
You are free to use, redistribute and modify at will EXCEPT IF MARKED OTHERWISE IN A PARTICULAR SOURCE FILE!
Version 0.20
*/
#include "wiring_private.h"
//Untested code lurks ahead! If it does or does not work, please notify me!
unsigned long pulseIn(unsigned char pin, unsigned char stat, unsigned long timeout = 0xFFFFFFFF){
	unsigned long st;
	while(digitalRead(pin) != stat){if(micros() - st > timeout){return 0;}}
	st = micros();
	while(digitalRead(pin) == stat){if(micros() - st > timeout){return micros()-st;}}
	return micros()-st;
}
	