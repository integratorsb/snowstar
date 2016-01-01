﻿/*
 * notes.h
 *
 * Created: 29.12.2015 6:43:36
 *  Author: Integrator.sb
 */ 


#ifndef NOTES_H_
#define NOTES_H_
#include <avr/pgmspace.h>

// длительность нот
#define B_DUR 60 // начальное значение в мс
// множитель
#define dX01	0
#define dX02	0b00100000
#define dX04	0b01000000
#define dX08	0b01100000
#define dX16	0b10000000
#define dX32	0b10100000
#define dX64	0b11000000

#define B_PAUSE 5// пауза перед следующей нотой в мс

// номера нот
enum{
	nSL, //пауза
	
	nC1,
	nC1d,
	nD1,
	nD1d,
	nE1,
	nF1	,
	nF1d,
	nG1	,
	nG1d,
	nA1,
	nA1d,
	nH1,

	nC2,
	nC2d,
	nD2,
	nD2d,
	nE2,
	nF2,
	nF2d,
	nG2,
	nG2d,
	nA2,
	nA2d,
	nH2,

	nC3,
	nC3d,
	nD3,
	nD3d,
	nE3,
	nF3,
	nF3d,
	//nG3,
	//nG3d,
	//nA3,
	//nA3d,
	//	nH3,
	
};


#define nB1 nH1
#define nB2 nH2

// коэффициенты таймера для нот
const uint8_t notes[] PROGMEM ={
	0,	// пауза

	143, // 262
	135, // 277
	128,
	121,
	114,
	107,
	101,
	96,
	90,
	85,
	80,
	76,

	143/2,
	135/2,
	128/2,
	121/2,
	114/2,
	107/2,
	101/2,
	96/2,
	90/2,
	85/2,
	80/2,
	76/2,

	143/4,
	135/4,
	128/4,
	121/4,
	114/4,
	26,
	24,
	//23,
	//21,
	//20,
	//19,
	//18,
};

// елочка
const uint8_t tune1[] PROGMEM =
{
	nG2 + dX16,
	nE2 + dX08,
	nE2 + dX08,
	nG2 + dX16,
	nE2 + dX08,
	nE2 + dX08,
	nG2 + dX08,
	nF2 + dX08,
	nE2 + dX08,
	nD2 + dX08,
	nC2 + dX32,
	nA2 + dX16,
	nC3 + dX08,
	nA2 + dX08,
	nG2 + dX16,
	nE2 + dX08,
	nE2 + dX08,
	nG2 + dX08,
	nF2 + dX08,
	nE2 + dX08,
	nD2 + dX08,
	nC2 + dX32,
	nA2 + dX16,
	nC3 + dX08,
	nA2 + dX08,
	nG2 + dX16,
	nE2 + dX08,
	nE2 + dX08,
	nG2 + dX08,
	nF2 + dX08,
	nE2 + dX08,
	nD2 + dX08,
	nC2 + dX32,
	nSL + dX32
};

// кабы не было зимы
const uint8_t tune2[] PROGMEM =
{
	nH2 + dX08,
	nG2 + dX04,
	nE2 + dX04,
	nC2d + dX04,
	nG2 + dX04,
	nF2d + dX04,
	nF2d + dX08,
	nF2d + dX02,
	nG2 + dX02,
	nF2d + dX02,
	nE2 + dX02,
	nD2 + dX04,
	nC2d + dX04,
	nG2 + dX08,
	nF2d + dX04,
	nH2 + dX08,
	nG2 + dX04,
	nE2 + dX04,
	nC2d + dX04,
	nG2 + dX04,
	nF2d + dX04,
	nF2d + dX08,
	nF2d + dX02,
	nG2 + dX02,
	nF2d + dX02,
	nE2 + dX02,
	nD2 + dX04,
	nC2d + dX04,
	nH1 + dX16,
	nH2 + dX04,
	nSL + dX04,
	nG2 + dX04,
	nE2 + dX04,
	nC2d + dX04,
	nG2 + dX04,
	nF2d + dX04,
	nF2d + dX08,
	nF2d + dX02,
	nG2 + dX02,
	nF2d + dX02,
	nE2 + dX02,
	nD2 + dX04,
	nC2d + dX04,
	nG2 + dX08,
	nF2d + dX04,
	nH2 + dX08,
	nG2 + dX04,
	nE2 + dX04,
	nC2d + dX04,
	nG2 + dX04,
	nF2d + dX04,
	nF2d + dX08,
	nF2d + dX02,
	nG2 + dX02,
	nF2d + dX02,
	nE2 + dX02,
	nD2 + dX04,
	nC2d + dX04,
	nH1+ dX16,
	nH2 + dX04,
	nH1 + dX16,
	nF2d + dX04,
	nF2d + dX04,
	nF2d + dX08,
	nC2d + dX02,
	nE2 + dX04,
	nD2 + dX04,
	nH1 + dX04,
	nSL + dX04,
	nA1 + dX04,
	nA1 + dX04,
	nA2 + dX08,
	nG2 + dX02,
	nG2 + dX08,
	nF2d + dX08,
	nSL + dX04,
	nA2 + dX02,
	nG2 + dX02,
	nE2 + dX04,
	nC2d + dX04,
	nG2 + dX08,
	nF2d + dX02,
	nF2d + dX08,
	nSL + dX04,
	nF2d + dX02,
	nF2d + dX02,
	nF2d + dX08,
	nE2 + dX02,
	nE2 + dX04,
	nD2 + dX16,
	nSL + dX04,
	nF2d + dX02,
	nF2d + dX02,
	nF2d + dX08,
	nC2d + dX02,
	nE2 + dX02,
	nD2 + dX02,
	nH1 + dX16,
	nA1 + dX04,
	nA1 + dX04,
	nA2 + dX08,
	nG2 + dX02,
	nG2 + dX08,
	nF2d + dX04,
	nH2 + dX08,
	nG2 + dX04,
	nE2 + dX04,
	nC2d + dX04,
	nG2 + dX04,
	nF2d + dX04,
	nF2d + dX08,
	nF2d + dX04,
	nF2d + dX04,
	nF2d + dX04,
	nE2 + dX04,
	nE2 + dX04,
	nD2 + dX08,
	nH2 + dX08,
	nG2 + dX04,
	nE2 + dX04,
	nC2d + dX04,
	nG2 + dX04,
	nF2d + dX04,
	nF2d + dX08,
	nF2d + dX04,
	nF2d + dX04,
	nF2d + dX04,
	nA2d + dX04,
	nC2d + dX04,
	nH1 + dX16,
	nH2 + dX04,
	nG2 + dX04,
	nE2 + dX04,
	nC2d + dX04,
	nG2 + dX04,
	nF2d + dX04,
	nF2d + dX08,
	nF2d + dX02,
	nG2 + dX02,
	nF2d + dX02,
	nE2 + dX02,
	nD2 + dX04,
	nC2d + dX04,
	nG2 + dX08,
	nF2d + dX04,
	nH2 + dX08,
	nG2 + dX04,
	nE2 + dX04,
	nC2d + dX04,
	nG2 + dX04,
	nF2d + dX04,
	nF2d + dX08,
	nF2d + dX02,
	nG2 + dX02,
	nF2d + dX02,
	nE2 + dX02,
	nD2 + dX04,
	nC2d + dX04,
	nH1 + dX16,
	nSL + dX16
	//nF2d + dX04,
	//nF2d + dX04,
	//nF2d + dX08,
	//nC2d + dX02,
	//nE2 + dX04,
	//nD2 + dX04,
	//nH1 + dX08,
	//nA1 + dX04,
	//nA1 + dX04,
	//nA2 + dX04,
	//nG2 + dX04,
	//nG2 + dX04,
	//nF2d + dX08,
	//nA2 + dX08,
	//nG2 + dX04,
	//nE2 + dX04,
	//nC2d + dX04,
	//nG2 + dX04,
	//nF2d + dX04,
	//nF2d + dX08,
	//nF2d + dX04,
	//nF2d + dX04,
	//nF2d + dX08,
	//nE2 + dX02,
	//nE2 + dX04,
	//nD2 + dX08,
	//nSL + dX04,
	//nF2d + dX04,
	//nF2d + dX04,
	//nF2d + dX08,
	//nC2d + dX02,
	//nE2 + dX04,
	//nD2 + dX04,
	//nH1 + dX08,
	//nA1 + dX04,
	//nA1 + dX04,
	//nA2 + dX04,
	//nG2 + dX04,
	//nG2 + dX04,
	//nF2d + dX08,
	//nH2 + dX08,
	//nG2 + dX04,
	//nE2 + dX04,
	//nC2d + dX04,
	//nG2 + dX04,
	//nF2d + dX04,
	//nF2d + dX08,
	//nF2d + dX04,
	//nF2d + dX04,
	//nF2d + dX04,
	//nE2 + dX04,
	//nE2 + dX04,
	//nD2 + dX08,
	//nH2 + dX08,
	//nG2 + dX04,
	//nE2 + dX04,
	//nC2d + dX04,
	//nG2 + dX04,
	//nF2d + dX04,
	//nF2d + dX08,
	//nF2d + dX04,
	//nF2d + dX04,
	//nF2d + dX04,
	//nA2d + dX04,
	//nC2d + dX04,
	//nH1 + dX16,
	//nF2d + dX04,
	//nF2d + dX04,
	//nF2d + dX08,
	//nC2d + dX02,
	//nE2 + dX04,
	//nD2 + dX04,
	//nH1 + dX08,
	//nA1 + dX04,
	//nA1 + dX04,
	//nA2 + dX04,
	//nG2 + dX04,
	//nG2 + dX04,
	//nF2d + dX08,
	//nA2 + dX08,
	//nG2 + dX04,
	//nE2 + dX04,
	//nC2d + dX04,
	//nG2 + dX04,
	//nF2d + dX04,
	//nF2d + dX08,
	//nF2d + dX04,
	//nF2d + dX04,
	//nF2d + dX08,
	//nE2 + dX02,
	//nE2 + dX04,
	//nD2 + dX08,
	//nSL + dX04,
	//nF2d + dX04,
	//nF2d + dX04,
	//nF2d + dX08,
	//nC2d + dX02,
	//nE2 + dX04,
	//nD2 + dX04,
	//nH1 + dX08,
	//nA1 + dX04,
	//nA1 + dX04,
	//nA2 + dX04,
	//nG2 + dX04,
	//nG2 + dX04,
	//nF2d + dX08,
	//nH2 + dX08,
	//nG2 + dX04,
	//nE2 + dX04,
	//nC2d + dX04,
	//nG2 + dX04,
	//nF2d + dX04,
	//nF2d + dX08,
	//nF2d + dX04,
	//nF2d + dX04,
	//nF2d + dX04,
	//nE2 + dX04,
	//nE2 + dX04,
	//nD2 + dX08,
	//nH2 + dX08,
	//nG2 + dX04,
	//nE2 + dX04,
	//nC2d + dX04,
	//nG2 + dX04,
	//nF2d + dX04,
	//nF2d + dX08,
	//nF2d + dX04,
	//nF2d + dX04,
	//nF2d + dX04,
	//nA2d + dX04,
	//nC2d + dX04,
	//nH1 + dX08,
	//nSL + dX16
};

// три белых коня
const uint8_t tune3[] PROGMEM ={
	nD2d + dX32,
	nD2  + dX04,
	nC2  + dX04,
	nA1d  + dX04,
	nG1d + dX32,
	nC2  + dX04,
	nD2d  + dX04,
	nG2  + dX08,
	nF2 + dX32,
	nA1d  + dX04,
	nA2d  + dX08,
	nG2d  + dX02,
	nG2d  + dX16,
	nG2  + dX16,
	nC2  + dX16,
	nD2  + dX16,
	nD2d + dX32,
	nD2  + dX04,
	nC2  + dX08,
	nA1d  + dX04,
	nG1d + dX32,
	nF1  + dX08,
	nD2  + dX04,
	nC2  + dX04,
	nB1 + dX16,
	nSL + dX02,
	nB1 + dX01,
	nC2 + dX01,
	nD2  + dX16,
	nB1  + dX16,
	nC2 + dX16,
	nC2  + dX16,
	nSL + dX02,
	nG1  + dX02,
	nC2  + dX04,
	nG1  + dX02,
	nC2  + dX02,
	nC2  + dX02,
	nG1  + dX02,
	nF1  + dX02,
	nD1d  + dX02,
	nD1  + dX08,
	nD1d  + dX02,
	nD1  + dX04,
	nC1  + dX08,
	nSL + dX02,
	nA1d  + dX02,
	nA1d  + dX02,
	nA1d  + dX02,
	nA1d  + dX02,
	nC2  + dX02,
	nA1d  + dX02,
	nG1d  + dX02,
	nG1  + dX16,
	nSL + dX04,
	nG1  + dX08,
	nF1  + dX02,
	nG1  + dX04,
	nF1  + dX02,
	nF1  + dX02,
	nF1  + dX02,
	nG1  + dX04,
	nF1  + dX02,
	nD2d  + dX08,
	nD2  + dX08,
	nF1  + dX08,
	nD1d  + dX02,
	nF1  + dX04,
	nD1d  + dX02,
	nD1d  + dX02,
	nD1d  + dX02,
	nF1  + dX04,
	nD1d  + dX02,
	nD2  + dX04,
	nC2  + dX08,
	nSL + dX02,
	nD1  + dX04,
	nD1  + dX02,
	nD1  + dX02,
	nD1  + dX02,
	nD1  + dX02,
	nD1  + dX02,
	nD1d  + dX08,
	nD1  + dX04,
	nC1d  + dX04,
	nD1  + dX08,
	nG1 + dX16,
	nSL + dX08,
	nD2d  + dX16,
	nD2  + dX04,
	nD2  + dX04,
	nC2  + dX02,
	nD2  + dX02,
	nD2d  + dX02,
	nD2d  + dX04,
	nD2  + dX02,
	nD2  + dX04,
	nC2  + dX02,
	nD2  + dX02,
	nD2d  + dX08,
	nD2d  + dX02,
	nD2  + dX08,
	nC2  + dX02,
	nA1d  + dX02,
	nG1d  + dX04,
	nG1  + dX02,
	nF1  + dX02,
	nG1  + dX02,
	nA1d  + dX16,
	nSL + dX02,
	nA1d  + dX02,
	nA1d  + dX08,
	nG1d  + dX02,
	nF1  + dX02,
	nD1  + dX02,
	nF1  + dX08,
	nG1d  + dX02,
	nG1d  + dX04,
	nG1  + dX02,
	nC2  + dX02,
	nD2d  + dX08,
	nD2d  + dX02,
	nD2  + dX04,
	nA1  + dX02,
	nC2  + dX02,
	nB1  + dX02,
	nC2  + dX04,
	nD2  + dX02,
	nC2  + dX08,
	nD2d  + dX16,
	nD2  + dX08,
	nD2  + dX04,
	nC2  + dX02,
	nD2  + dX02,
	nD2d  + dX02,
	nD2d  + dX04,
	nD2  + dX02,
	nD2  + dX08,
	nC2  + dX02,
	nD2  + dX02,
	nD2d  + dX08,
	nD2d  + dX02,
	nD2  + dX04,
	nC2  + dX02,
	nA1d  + dX02,
	nG1d  + dX04,
	nG1  + dX02,
	nF1  + dX02,
	nG1  + dX02,
	nA1d  + dX16,
	nSL + dX02,
	nA1d  + dX02,
	nA1d  + dX08,
	nG1d  + dX02,
	nF1  + dX02,
	nD1  + dX02,
	nF1  + dX08,
	nG1d  + dX02,
	nG1d  + dX04,
	nG1  + dX02,
	nC2  + dX02,
	nD2d  + dX08,
	nD2d  + dX02,
	nD2  + dX08,
	nA1  + dX02,
	nC2  + dX02,
	nB1  + dX02,
	nC2  + dX08,
	nD2  + dX02,
	nC2  + dX04,
	nD2d  + dX16,
	nD2  + dX08,
	nD2  + dX04,
	nA1  + dX02,
	nC2  + dX02,
	nB1  + dX08,
	nC2  + dX02,
	nD2  + dX02,
	nC2  + dX16,
	//nSL + dX02,
	//nG1  + dX02,
	nSL + dX32


};

typedef struct{
	uint8_t *p;
	uint16_t sz;
}S_TUNE;

// таблица с указателями и размерами мелодий
static const S_TUNE ttbl[] PROGMEM = {
	{(uint8_t*)&tune1, (uint16_t)sizeof(tune1)},
	{(uint8_t*)&tune2, (uint16_t)sizeof(tune2)},
	{(uint8_t*)&tune3, (uint16_t)sizeof(tune3)}
		
};

// кол-во мелодий в памяти
#define CTUNES sizeof(ttbl)/sizeof(S_TUNE)

#endif /* NOTES_H_ */