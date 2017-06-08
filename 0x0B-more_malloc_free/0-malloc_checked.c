#include <stdlib.h>
#include "holberton.h"
/**
  * malloc_checked - allocate memory
  * @b: int given
  * Return: void
  */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
