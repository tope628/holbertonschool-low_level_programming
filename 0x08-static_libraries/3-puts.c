#include "holberton.h"
#include <stdio.h>
/**
  * _puts - prints string
  * @str: string given
  * Return: string
  */

void _puts(char *str)
{
	int i;

	for (i = 0; (*(str + i) != '\0'); i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
