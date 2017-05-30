#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
#include "holberton.h"
/**
  *print_chessboard - prints a chessboard
  * @a: given pointer
  * @x: given # of bytes
  * @y: first n bytes
  * Return: void
  */

void print_chessboard(char (*a)[8])
{
	unsigned int x,y;

	for (x = 0; a[x] && x < 8; x++)
	{
		for (y = 0; a[y] && y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}

