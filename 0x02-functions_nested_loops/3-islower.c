#include "holberton.h"

/**
* _islower - checks for lowercase letter
* Return: void
*/
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
