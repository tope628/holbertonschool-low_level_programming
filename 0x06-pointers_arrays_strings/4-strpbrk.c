#include "holberton.h"
/**
  * *_strpbrk -  locates character in a string
  * Return: pointer to result string
  * @s: given string to scan
  * @accept: given character to look for
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
