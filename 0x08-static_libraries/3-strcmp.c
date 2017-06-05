#include "holberton.h"
/**
  * _strcmp -  compares 2 Strings
  * Return: -15:less than, 15:greater, 0:equal
  * @s1: given
  * @s2: given
  */

int _strcmp(char *s1, char *s2)
{
	int j = 0;
	int count = 0;

	while  ((s1[j] && s2[j]) && (s1[j] == s2[j]))
	{
		j++;
	}
	count = (s1[j] - s2[j]);
	return (count);
}
