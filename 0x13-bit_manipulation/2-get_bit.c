#include "holberton.h"
#include <limits.h>
/**
  * get_bit - value of bit at given index
  * @n: number given
  * @index: index given
  * Return: value of bit or -1 if error
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int i = (sizeof(n) * CHAR_BIT - 1);
	int j = index;
	if (n == 0 && index == 0)
		return (0);
	while (i >= 0)
	{
		if (i == j)
		{
			return ((n >> index) & 1);
		}
		i--;
	}
	return (-1);
}
