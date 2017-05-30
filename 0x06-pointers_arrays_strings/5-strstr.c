#include "holberton.h"
/**
  * *_strstr -  locates character in a string
  * Return: pointer to result string
  * @haystack: given string to scan
  * @needle: given character to look for
  * @p: pointer to return
  */
char *_strstr(char *haystack, char *needle)
{
	char *p;
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (haystack[i] == needle[j])
			{ 
				p = (needle + j);
			}
			else 
			{
				p = '\0';
			}	
		}
	}
	return (p);
}
