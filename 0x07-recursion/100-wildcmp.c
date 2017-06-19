#include "holberton.h"
/**
  * wildcmp -  compares 2 strings
  * @s1: first string given
  * @s2: second string given
  * Return: 1 if identical 0 if not
  */
int wildcmp(char *s1, char *s2)
{
	unsigned int n = 0;
	unsigned int m = 0;

	if ((s2[n] == '*') && (s1))
	{
		if ((s1[m + n] == s2[n + 1]) || (s1[m] == s2[n - 1]))
		{
		      return (1);
		}
		else
		{
			return (0);
		}
	m++;
	}
	n++;
	return wildcmp(s1 + 1, s2 + 1);
}

