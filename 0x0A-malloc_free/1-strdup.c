#include "holberton.h"
#include <string.h>
#include <stdlib.h>
/**
  * *_strdup - array of chars
  * @str: string given
  * Return: 0
  */

char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	s = malloc(sizeof(*str) * strlen(str));

	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(s, str);
	}
	return (s);
}
