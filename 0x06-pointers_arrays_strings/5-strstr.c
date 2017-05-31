#include "holberton.h"
/**
  * *_strstr -  locates character in a string
  * Return: pointer to result string
  * @haystack: given string to scan
  * @needle: given character to look for
  */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i]; i++)
	{
		if ((haystack + i) == needle)
		{
			return (haystack + i);
		}
	}
	return (0);
}
