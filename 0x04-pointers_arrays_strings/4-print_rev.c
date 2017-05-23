#include "holberton.h"
#include <stdio.h>
/**
  * print_rev - prints string in reverse
  * @s: string given
  * Return: string
  */

void print_rev(char *s)
{
	int i;
	int x = 0;

	for (i = 0; (*(s + i) != '\0'); i++)
	{
		x = i;
	}
	for (x = i; x >= 0; x--)
	{
		_putchar(*(s + x));
	}
	_putchar('\n');
}
