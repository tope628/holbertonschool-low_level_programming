#include "holberton.h"
/**
  * _strlen_recursion - length of a string
  * @s: string given
  * Return: length
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
#include "holberton.h"
/**
  * palindrome - checks for match
  * @beg: 0
  * @end: length given
  * @str: string given
  * Return: 0 or 1
  */
int palindrome(int beg, int end, char *str)
{
	if (beg >= end)
	{
		return (1);
	}
	else if (str[beg] != str[end])
	{
		return (0);
	}
	else
		return (palindrome(beg + 1, end - 1, str));
}

#include "holberton.h"
/**
  * is_palindrome - palindrome
  * @s: int given
  * Return: 0 or 1
  */
int is_palindrome(char *s)
{
	int length = (_strlen_recursion(s) - 1);

	return (palindrome(0, length, s));
}

