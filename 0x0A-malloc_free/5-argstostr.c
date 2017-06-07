#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - grid space
 * @ac: given
 * @av: given
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, **arr;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);

}
