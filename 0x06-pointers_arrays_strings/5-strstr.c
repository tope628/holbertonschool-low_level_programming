#include "holberton.h"
/**
  * *_strstr -  locates character in a string
  * Return: pointer to result string
  * @haystack: given string to scan
  * @needle: given character to look for
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; haystack[i + j]; j++)
		{
			if ((haystack[i + j] == needle[j])
			&& (haystack[i + j + 1] == needle[j + 1]))
			{
				return (haystack + i + j);
			}
		}
	}
	if ((haystack[i + j] == needle[j]) && (needle[j] == '\0'))
	{
		return (haystack + i + j);
	}
	return (0);
}
