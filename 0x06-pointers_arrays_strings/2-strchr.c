#include "holberton.h"
/**
  * *_strchr -  locates character in a string
  * Return: pointer to result string
  * @s: given string to scan
  * @c: given character to look for
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if ((s[i] == c) && (c == '\0'))
	       return (0);	
	return (0);
}
