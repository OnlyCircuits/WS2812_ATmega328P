/*
 * WS2812.cpp
 * Author : OnlyCircuits
 */ 
#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int leds [255][3];

void fill(int led, int _r, int _g, int _b)
{
	leds [led][0] = _g;
	leds [led][1] = _r;
	leds [led][2] = _b;
}

void write(){
	
	for (uint8_t i = 0; i <= 254; i++)
	{
		for (uint8_t j = 0; j <= 2; j++)
		{
			for (uint8_t k = 0; k <= 7; k++)
			{
				if ((leds[i][j] & (1<<k)) != 0)
				{
					PORTB |= (1 << PORTB1);
					asm("NOP");asm("NOP");asm("NOP");asm("NOP");asm("NOP");asm("NOP");asm("NOP");
					PORTB &= ~(1 << PORTB1);
					asm("NOP");asm("NOP");asm("NOP");asm("NOP");
				}
				else
				{
					PORTB |= (1 << PORTB1);
					asm("NOP");asm("NOP");asm("NOP");asm("NOP");
					PORTB &= ~(1 << PORTB1);
					asm("NOP");asm("NOP");asm("NOP");asm("NOP");asm("NOP");asm("NOP");asm("NOP");
				}
			}
		}
	}
	_delay_us(50);
}

int main(void)
{
    DDRB = 0xFF;
	PORTB = 0x00;
	
	for (uint8_t p = 0; p <= 7; p++)
	{
		
		fill(p, 0x00, 0x00, 0xFF);
		
	}
	write();
	
    while (1) 
    {
		
    }
}

