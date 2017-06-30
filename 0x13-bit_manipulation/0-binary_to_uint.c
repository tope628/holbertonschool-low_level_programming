#include "holberton.h"
#include <stdio.h>
/**
  * binary_to_uint - binary to unsigned int
  * @b: string of 0 and 1 chars
  * Return: converted number or 0
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			decimal = decimal << 1;
			decimal += 1;
		}

		else if (b[i] == '0')
		{
			decimal = decimal << 1;
		}
	}
	return (decimal);
}


