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
	char *arr;
	int i, j, x = 0, y = 0;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			x++;
		}
		x++;
	}
	x++;
	arr = malloc(sizeof(char) * x);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arr[y] = av[i][j];
			y++;
		}
		arr[y] = '\n';
		y++;
	}
	arr[y] = '\0';
	return (arr);
}
