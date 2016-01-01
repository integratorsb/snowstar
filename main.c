/*
 * snowstar.c
 *
 * Created: 28.12.2015 23:05:41
 * Author : Integrator.sb
 */ 

#define F_CPU 4800000UL 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <avr/pgmspace.h>
#include "notes.h"

#define PBTN PORTB2 
#define PLED PORTB1 


int main(void)
{
	
	uint8_t  n, nt, nTunes;
	uint8_t *pTunes;
	uint16_t i, szTunes;
	
	cli();
	PORTB = (1<<PBTN);
	DDRB = (1<<PORTB0) | (1<<PLED);
	
	// режим CTC
	// максивальная частота таймера 37500Гц 
	TCCR0A = (1<<COM0A0) | (1<<WGM01); // дергаем ногой по совпадению
	TCCR0B = (1<<CS01) | (1<<CS00); // делитель на 64
	sei();
	
	nTunes = 0; // номер мелодии
	
    while (1) 
    {	
		
		PORTB &= ~(1<<PLED);//
		
		if(nTunes >= CTUNES)
			nTunes = 0;
		// загружаем указатель на мелодию в памяти
		pTunes =  (uint8_t*)pgm_read_word(&ttbl[nTunes].p);
		// и её размер в байтах
		szTunes = pgm_read_word(&ttbl[nTunes].sz);
		
		// цикл воспроизведения
		for(i = 0; i < szTunes; i++)
		{
			
			nt = pgm_read_byte(&pTunes[i]);
			n = 1<<((nt>>5));// длительность
			nt = nt & 0x1f;// нота	

			OCR0A = pgm_read_byte(&notes[nt]); // загружаем коэффициент
			
			// проигрываем ноту
			if(nt != nSL)
				TCCR0B = (1<<CS01) | (1<<CS00); // вкл. таймер

			while(n != 0)
			{
				_delay_ms(B_DUR);
				n--;
			}
			
			// пауза перед следующей нотой
			TCCR0B = 0;// выкл. таймер
			_delay_ms(B_PAUSE);
			
			// во время паузы проверяем кнопку
			if(!(PINB & 1<<PBTN))
			{
				_delay_ms(50);
				if(!(PINB & 1<<PBTN))
				{
					while(!(PINB & 1<<PBTN)){};
						
					nTunes++;
					break; // выходим из цикла воспроизведения
				}
			}
			
			// просто мигалка
			PORTB ^= 1<<PLED;
			
		}	
		_delay_ms(1000);
		//nTunes++;
    }
}

