#include "holberton.h"
#include <stdlib.h>
/**
  * create_array - array of chars
  * @size: int given
  * @c: specific char
  * Return: 0
  */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, x = 0;
	char *arr;

	if (s1 == NULL)
	{
		i = 0;
	}
	else if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (i = 0; (*(s1 + i)); i++)
			{}
		for (j = 0; s2[j]; j++)
		{
			i += (j + 1);
		}
	}

	arr = malloc(i * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	while (x < i)
	{
		arr[i] += s2[j];
	}
	arr[i + j] = '\0';
	return (arr);
}
