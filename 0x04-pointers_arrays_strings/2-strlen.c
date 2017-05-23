#include "holberton.h"
#include <stdio.h>
/**
  * _strlen - ulength of string
  * @s: integer given
  * Return: length of string
  */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for( i = 0; (*(s + i) != '\0'); i++)
	{
		count++;
	}
	if (count > 9)
	{
		printf("%d\n",count);
	}
	_putchar('\n');
	return (0);
}
