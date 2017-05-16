#include "holberton.h"

/**
* _islower - checks for lowercase letter
* Return: void
* @c: number given
*/
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
