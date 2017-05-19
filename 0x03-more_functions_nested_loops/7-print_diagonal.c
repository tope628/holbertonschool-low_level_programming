#include "holberton.h"

/**
* print_diagonal - print line
* Return: void
* @n: number given
*/
void print_diagonal(int n)
{
		int count, space;

		for (count = 0; count < n; count++)
		{
			for (space = 0; space < count; space++)
			{
				_putchar(' ');
			}

			if (n <= 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
}
