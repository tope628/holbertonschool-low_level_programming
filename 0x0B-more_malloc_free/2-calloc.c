#include <stdlib.h>
#include "holberton.h"

/**
  * _calloc - allocate memory for an array
  * @nmemb: number of elements
  * @size: size of bytes needed
  * Return: array as pointer
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	
	return (arr);
	free(arr);

}
