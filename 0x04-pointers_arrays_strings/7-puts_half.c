#include "holberton.h"
#include <stdio.h>
/**
  * puts_half - prints string in half
  * @str: string given
  * Return: string
  */

void puts_half(char *str)
{
	int i;
	int x = 0;

	for (i = 0; (*(str + i) != '\0'); i++)
	{
		x = (i / 2);
	}
	for (x = (i / 2); (*(str + x) != '\0'); x++)
	{
		_putchar(*(str + x));
	}
	_putchar('\n');
}
