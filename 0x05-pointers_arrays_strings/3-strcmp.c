#include "holberton.h"
/**
  * _strcmp -  compares 2 Strings
  * Return: -15:less than, 15:greater, 0:equal
  * @s1: given
  * @s2: given
  */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; (*(s1 + i)); i++)
	{}
	for (j = 0; (*(s2 + j)); j++)
	{}
	if (i == j)
	{
		return (0);
	}
	else if (i < j)
	{
		return (-15);
	}
	else
	{
		return (15);
	}
}
