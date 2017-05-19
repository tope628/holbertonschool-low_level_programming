#include "holberton.h"

/**
* print_line - print line
* Return: void
* @n: number given
*/
void print_line(int n)
{
		int line = '_';
		int count;

		for (count = 0; count < n; count++)
		{
			_putchar(line);
		}
		_putchar('\n');
}
