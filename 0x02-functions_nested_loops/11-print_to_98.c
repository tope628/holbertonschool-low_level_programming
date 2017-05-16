#include "holberton.h"

/**
* print_to_98 - print from n to 98
* Return: void
* @n: integer given
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
}
