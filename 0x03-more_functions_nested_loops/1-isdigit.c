#include "holberton.h"

/**
* _isdigit - checks for number
* Return: void, 0 and 1
* @c: number given
*/
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
