#include "holberton.h"

/**
* print_alphabet -print alphabet
* Return: void
*/
void print_to_98(int n)
{
		if (n < 98)
			_putchar(n);
			n++;
		if (n == 98)
			_putchar(n);
		if (n > 98) 
			_putchar(n);
			n--;

		
		_putchar('\n');

	return;
}
