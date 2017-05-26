#include "holberton.h"
/**
  * string_toupper - entry point
  * @s: given
  * Return: string with all uppercase
  */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; (*(s + i)); i++)
	{
		if ((*(s + i) >= 'a') && (*(s + i) <= 'z'))
		{
			*(s + i) = (*(s + i) - 32);
		}
	}
	return (s);
}
