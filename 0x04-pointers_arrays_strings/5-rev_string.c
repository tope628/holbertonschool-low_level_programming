#include "holberton.h"
/**
  * rev_string - prints string in reverse
  * @s: string given
  * Return: string
  */

void rev_string(char *s)
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
