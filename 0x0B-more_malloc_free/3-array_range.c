#include <stdlib.h>
#include "holberton.h"
/**#include <stdio.h>
*/
/**
  * array_range - create an array of integers ranging from min to max
  * @min: int given
  * @max: int given
  * Return: pointer to array of int
  */

int *array_range(int min, int max)
{
	int i, x, y;
	int *p;

	if (min > max)
		return (NULL);
	for (x = min; x <= max; x++)
		;
	y = x + 1;
/**	printf("%i\n", y);
*/
	p = malloc(sizeof(int) * x);

	if (p == NULL)
		return (NULL);

	for (x = min, i = 0; i < y; x++, i++)
		p[i] = x;

	return (p);
}
