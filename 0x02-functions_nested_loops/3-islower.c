#include "holberton.h"

/**
* _islower - checks for lowercase letter
* Return: void
*/
int _islower(int c)
{
	if ((c >= 97) && (c <=122))
		_putchar('1');
	else
		_putchar('0');
		
	_putchar('\n');

	return (0);
}
