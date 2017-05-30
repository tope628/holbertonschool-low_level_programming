#include "holberton.h"
/**
  * *_strchr -  locates character in a string
  * Return: pointer to result string
  * @s: given string to scan
  * @c: given character to look for
  */
char *_strchr(char *s, char c)
{
	char *p;
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			p = (s + i);
			return (p);
		}
	}
	return (0);
}
