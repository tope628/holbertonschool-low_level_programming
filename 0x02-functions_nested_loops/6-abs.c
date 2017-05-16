#include "holberton.h"

/**
* _abs - finds absolute value 
* Return: n if successful
* n: integer given
*/
int _abs(int n)
{
	if (n < '0')
		return (n * -1);
	else
		return (n);
}
