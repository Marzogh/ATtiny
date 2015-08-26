/*
*** Core13 ***
Arduino core designed for Attiny13 and similar devices.
NO WARRANTEE OR GUARANTEES!
Written by John "smeezekitty" 
You are free to use, redistribute and modify at will EXCEPT IF MARKED OTHERWISE IN A PARTICULAR SOURCE FILE!
Version 0.20
*/
#include <WProgram.h>
int main(){
	init(); //Call init routine 
	setup(); //Call user provided setup()
	while(1){loop();} //Continuiously call user provided loop()
}