#include "holberton.h"

/**
* jack_bauer - counts 24 hours
* Return: void
*
*/
void jack_bauer(void)
{
	int hour = 00;
	int min = 00;

	while (hour <= 23)
	{
		while (min <= 59)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		min = 00;
		hour++;
	}
}
