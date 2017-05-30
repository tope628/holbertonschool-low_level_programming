#include "holberton.h"
/**
  * _strspn -  locates character in a string
  * Return: pointer to result string
  * @s: given string to scan
  * @accept: given characters to look for
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;

	for (i = 0; s[i]; i++)
	{
		if (count != i)
			break;

		for (j = 0; s[j]; j++)
		{
			if (s[i] == accept[j])
			count++;
		}
	}
	return (count);
}


