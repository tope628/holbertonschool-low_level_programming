#include "holberton.h"
#include <stdio.h>
/**
  * puts_half - prints string in half
  * @str: string given
  * Return: string
  */

void puts_half(char *str)
{
	int i, x;

	for (i = 0; (*(str + i) != '\0'); i++)
	{}
	x = (i + (i % 2)) / 2;
	while (x < i)
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}
