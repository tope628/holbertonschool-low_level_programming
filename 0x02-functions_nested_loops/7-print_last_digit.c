#include "holberton.h"

/**
* print_last_digit - checks for lowercase letter
* @n: int given
* Return: void
*/
int print_last_digit(int n)
{
	int lastn = (n % 10);

	if (n < 0)
	{
		lastn *= -1;
	}
	_putchar(lastn + '0');
		return (lastn);
}
