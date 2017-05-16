#include "holberton.h"

/**
* _islower - checks for lowercase letter
* Return: void
*/
int print_last_digit(int n)
{
	int lastn;

	lastn = n % 10;

	_putchar(lastn);

	_putchar('\n');
	return(0);
}
