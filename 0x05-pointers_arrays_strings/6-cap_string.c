#include "holberton.h"
/**
  * cap_string - entry point
  * @s: given
  * Return: string with all uppercase
  */

char *cap_string(char *s)
{
	int i = 0;
	int x = 0;


	char *sep = ". \t\n;.!?\"(){}\0";

	for (i = 0; s[i]; i++)
	{
		for (x = 0; (sep[x]); x++)
		{
			if (s[i] == sep[x] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
