#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

void usart_init(void)
{
	UCSRB = (1<<TXEN) | (1<<RXEN);
	UCSRC = (1<<URSEL) | (1<<UCSZ1) | (1<<UCSZ0);
	UBRRL = 51;
}

void usart_send(unsigned char ch)
{
	while(!(UCSRA & (1<<UDRE)));
	UDR = ch;
}

int main(void)
{
	usart_init();

	DDRB &= ~(1<<PB0);      // input
	PORTB |= (1<<PB0);      // pull-up enable

	while(1)
	{
		if(!(PINB & (1<<PB0)))  // button pressed
		{
			usart_send('A');
			_delay_ms(500);
		}
	}
}