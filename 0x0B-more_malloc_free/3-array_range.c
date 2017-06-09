#include <stdlib.h>
#include "holberton.h"
/**
  * array_range - create an array of integers ranging from min to max
  * @min: int given
  * @max: int given
  * Return: pointer to array of int
  */

int *array_range(int min, int max)
{
	int i, x;
	int *p;

	if (min > max)
		return (NULL);
	x = max - min + 1;

	p = malloc(sizeof(int) * x);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < x; min++, i++)
		p[i] = min;

	return (p);
}
