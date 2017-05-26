#include "holberton.h"
/**
  * rot13 - encode in rot13
  * @s: given
  * Return: string
  */

char *rot13(char *s)
{
	int i, x;

	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (x = 0; in[x]; x++)
		{
			if (s[i] == in[x])
			{
				s[i] = out[x];
				break;
			}
		}
	}
	return (s);
}
