#include "holberton.h"

int _strlen(char *s)
{
	int count = 0;
	int n;

	for (n = 0; s[n]; count++, n++)
	{}
	return (count);
}
