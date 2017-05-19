#include "holberton.h"

/**
* print_diagonal - print line
* Return: void
* @n: number given
*/
void print_diagonal(int n)
{
		int count, space;

	if (n > 0)
		for (count = 0; count < n; count++)
		{
			for (space = 0; space < count; space++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	else
	_putchar('\n');
}
