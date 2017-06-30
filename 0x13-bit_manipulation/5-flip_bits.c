#include "holberton.h"
#include <limits.h>
/**
  * flip_bits - difference in bits
  * @n: number given
  * @m: number given
  * Return: count of bits flipped
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = (sizeof(n) * CHAR_BIT - 1);
	unsigned int count = 0;

	while (i >= 0)
	{
		if (((n ^ m) >> i) & 1)
			count++;
		i--;
	}
	return (count);
}
