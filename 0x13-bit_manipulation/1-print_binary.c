#include "holberton.h"
/**
** print_binary - print from binary
** @n: binary number given
** Return: void
**/

void print_binary(unsigned long int n)
{
	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}
	else
	{
		print_binary(n >> 1);
		n = n & 1;
		_putchar(n + '0');
	}
}
