#include "holberton.h"

/**
* print_square - print square
* Return: void
* @size: number given
*/
void print_square(int size)
{
		int col, row;

		for (col = 0; col < size; col++)
		{
			for (row = 0; row < size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
