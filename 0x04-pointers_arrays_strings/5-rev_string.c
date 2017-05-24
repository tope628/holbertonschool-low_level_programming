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
	char string[200];

	for (i = 0; (*(s + i) != '\0'); i++)
	{
		*(string + i) = *(s + i);
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(string + x);
		x++;
		i--;
	}
}
