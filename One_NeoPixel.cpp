/*
 * WS2812.cpp
 * Author : OnlyCircuits
 */ 
#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int leds [3];

void fill(int _r, int _g, int _b)
{
	leds[0] = _g;
	leds[1] = _r;
	leds[2] = _b;
}

void write(){
	
	for (uint8_t i = 0; i <= 2; i++)
	{
		for (uint8_t j = 0; j <= 7; j++)
		{
			if ((leds[i] & (1<<j)) != 0)
			{
				PORTB |= (1 << PORTB1);
				asm("NOP");asm("NOP");asm("NOP");asm("NOP");asm("NOP");asm("NOP");
				PORTB &= ~(1 << PORTB1);
				asm("NOP");asm("NOP");asm("NOP");
			}
			else
			{
				PORTB |= (1 << PORTB1);
				asm("NOP");asm("NOP");asm("NOP");
				PORTB &= ~(1 << PORTB1);
				asm("NOP");asm("NOP");asm("NOP");asm("NOP");asm("NOP");asm("NOP");
			}
		}
	}
	
}

int main(void)
{
    DDRB = 0xFF;
	PORTB = 0x00;
	
    while (1) 
    {
		fill(0xFF, 0, 0);
		write();
		_delay_ms(1000);
		fill(0, 0xFF, 0);
		write();
		_delay_ms(1000);
		fill(0, 0, 0xFF);
		write();
		_delay_ms(1000);
		fill(0xFF, 0xFF, 0xFF);
		write();
		_delay_ms(1000);
    }
}

