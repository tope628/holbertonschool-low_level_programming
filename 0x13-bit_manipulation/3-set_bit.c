#include "holberton.h"
#include <limits.h>
/**
  * set_bit - set value of bit to 1 at given index
  * @n: number given
  * @index: index given
  * Return: value of bit or -1 if error
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	int i = (sizeof(n) * CHAR_BIT - 1);
	int j = index;

	if (j <= i)
	{
		*n |= (1 <<  j);
		return (1);
	}
	return (-1);
}
