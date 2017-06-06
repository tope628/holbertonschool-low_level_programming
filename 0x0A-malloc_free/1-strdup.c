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

	s = malloc(strlen(str) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	strcpy (s,str);
	return (s);
}
