#include "holberton.h"

/**
* print_sign - checks the sign of a number
* Return: 0 if successful
* n - integer
*/
int print_sign(int n)
{
	if (n > '0')
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar('1');
		_putchar('\n');
	else if (n == '0')
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar('0');
		_putchar('\n');
	else
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar('-');
		_putchar('1');
		_putchar('\n');
	_putchar('\n');

	return (0);
}
