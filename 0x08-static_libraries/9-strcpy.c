#include "holberton.h"
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

