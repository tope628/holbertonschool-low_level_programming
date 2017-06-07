#include "holberton.h"
#include <stdlib.h>
/**
  * _strlen - ulength of string
  * @s: integer given
  * Return: length of string
  */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; (*(s + i) != '\0'); i++)
	{
		count++;
	}
	return (count + 1);
}
/**
  * *_strcpy - copy string
  * @dest: variable given
  * @src: string given
  * Return: destination
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; (src[i]); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
/**
* *_strdup - array of chars
  * @str: string given
  * Return: destination
  */
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * _strlen(str));

	if (s == NULL)
	{
		return (NULL);
	}
	_strcpy(s, str);
	return (s);
}
