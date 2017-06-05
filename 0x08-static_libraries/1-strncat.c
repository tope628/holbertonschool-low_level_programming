#include "holberton.h"
/**
  * *_strncat -  concatenates 2 atrings
  * Return: pointer to result string
  * @dest: given
  * @src: given
  * @n: given
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; (*(dest + i)); i++)
	{}
	for (j = 0; ((*(src + j)) && (j < n)); j++)
	{
		dest[i + j] += src[j];
	}
	dest[i + j] += '\0';
	return (dest);
}
