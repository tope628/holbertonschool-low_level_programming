#include "holberton.h"
#include <stdlib.h>
/**
  * *str_concat - array of chars
  * @s1: int given
  * @s2: specific char
  * Return: 0
  */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, x, y;
	char *arr;

	for (i = 0; s1 && s1[i]; i++)
		;
	for (j = 0; s2 && s2[j]; j++)
		;

	x = i + j + 1;

	arr = malloc(x * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (y = 0; s1 && y < i; y++)
	{
		arr[y] = s1[y];
	}
	for (y = 0; s2 && y < j; y++)
	{
		arr[y + i] = s2[y];
	}
	arr[y + i] = '\0';
	return (arr);
}
