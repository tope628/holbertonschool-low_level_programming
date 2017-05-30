#include "holberton.h"
/**
  * *_strchr -  locates character in a string
  * Return: pointer to result string
  * @s: given string to scan
  * @c: given character to look for
  * @p: pointer to return
  */
char *_strchr(char *s, char c)
{
	char *p;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (s[j] == c)
			{ 
				p = (s + j);
			}
			else 
			{
				p = '\0';
			}	
		}
	}
	return (p);
}
