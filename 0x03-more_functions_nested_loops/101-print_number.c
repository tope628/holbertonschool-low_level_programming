#include <stdio.h>
#include "holberton.h"
/**
  * print_number - print any number
  * Return: 0 if success
  * @n: number given
  */

void print_number(int n)
{
	int x, y, z;

	if (n < 0)
	{
		_putchar('-');
	}
	if (n >= 0)
	{
		for (x = 9; x >= 1; x--)
		{
			y = (n / (1*(10^x)));
			z = (n % 10);

			if ((y != 0) && (z != 0))
				_putchar(y + '0');
		
		}
	}	
}
		

