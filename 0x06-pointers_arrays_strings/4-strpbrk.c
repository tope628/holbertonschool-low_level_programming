#include "holberton.h"
/**
  * *_strpbrk -  locates character in a string
  * Return: pointer to result string
  * @s: given string to scan
  * @accept: given character to look for
  * @p: pointer to return
  */
char *_strpbrk(char *s, char *accept)
{
	char *p;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (s[i] == accept[j])
			{ 
				p = (s + i);
			}
			else 
			{
				p = '\0';
			}	
		}
	}
	return (p);
}
