#include "holberton.h"
#include <stdlib.h>
/**
 * strtow - grid space
 * @str: given
 * Return: 0
 */

char **strtow(char *str)
{
	char **word;
	int i = 0;

	if ((str[1] == "") || (str == NULL))
	{
		return (NULL);
	}
	for (length = 0; str[l]; i++)
	{
		if (str[i +1] != ' ' && str[i + 2] != ' ')
		{
			i++;
			*word[i] = str [i];
		}
		i++;
	}
	word = malloc(sizeof(char) * i);

	if (word == NULL)
	{
		return (NULL);
	}
	*word[i] = '\0';
	return (word);
}
