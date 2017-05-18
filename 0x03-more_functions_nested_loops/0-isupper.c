#include "holberton.h"

/**
* _isupper - checks for lowercase letter
* Return: void, 0 and 1
* @c: number given
*/
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
