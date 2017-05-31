
#include "holberton.h"
/**
  *print_chessboard - prints a chessboard
  * @a: given pointer
  * Return: void
  */

void print_chessboard(char (*a)[8])
{
	unsigned int x, y;

	for (x = 0; a[x] && x < 8; x++)
	{
		for (y = 0; a[y] && y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}

