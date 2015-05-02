/*
*** Core13 ***
Arduino core designed for Attiny13 and similar devices.
NO WARRANTEE OR GUARANTEES!
Written by John "smeezekitty" 
You are free to use, redistribute and modify at will EXCEPT IF MARKED OTHERWISE IN A PARTICULAR SOURCE FILE!
Version 0.20
*/
#ifndef WProgram_h
#define WProgram_h
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include "wiring.h"
#ifdef __cplusplus
uint16_t makeWord(uint16_t w);
uint16_t makeWord(byte h, byte l);
#define word(...) makeWord(__VA_ARGS__)
long random(long);
long random(long, long);
void randomSeed(unsigned int);
long map(long, long, long, long, long);
/*const static uint8_t A0 = 5;
const static uint8_t A1 = 2;
const static uint8_t A2 = 4;
const static uint8_t A3 = 3;*/
const static uint8_t A0 = 0; // Not so sure about this
const static uint8_t A1 = 1;
const static uint8_t A2 = 2;
const static uint8_t A3 = 3;
#endif
#endif