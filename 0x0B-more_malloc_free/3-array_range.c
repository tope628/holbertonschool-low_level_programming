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

	for (x = min; x <= max; x++)
		;

	p = malloc(sizeof(*p) * x);

	if (p == NULL)
		return (NULL);
	if (min > max)
		return (NULL);

	for (x = min, i = 0; x <= max; x++, i++)
		p[i] = x;

	return (p);
}
