#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * create_array - array of chars
  * @size: int given
  * @c: specific char
  * Return: 0
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[i] = '\0';
	return (arr);
}
