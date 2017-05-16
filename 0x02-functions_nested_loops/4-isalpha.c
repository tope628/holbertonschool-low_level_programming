#include "holberton.h"

/**
* _islower - checks for lowercase letter
* Return: void
*/
int _isalpha(int c)
{
	if (((97 >= c) &&(c <= 122)) || ((65 >= c) && (c <= 90)))
		_putchar('1');
	else
		_putchar('0');
		
	_putchar('\n');

	return (0);
}
