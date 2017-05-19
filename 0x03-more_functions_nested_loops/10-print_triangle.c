#include "holberton.h"

/**
* print_triangle - print triangle
* Return: void
* @size: number given
*/
void print_triangle(int size)
{
		int col, row, space, count, i;
	if (size > 0)
	{
		for (col = 1; col <= size; col++)
		{
			space = size - col;
			row = size - space;

			for (i = 1; i <= space; i++)
			{
				_putchar(' ');
			}
			for (count = 1; count <= row; count++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
