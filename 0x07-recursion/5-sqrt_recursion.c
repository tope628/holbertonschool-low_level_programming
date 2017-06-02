#include "holberton.h"
/**
  * natural_root - find square root
  * Return: root
  * @divisor: int
  * @x: int given
  */

int natural_root(int divisor, int x)
{
	if (((x % divisor) == 0) && ((x / divisor) == divisor))
	{
		return (divisor);
	}
	if ((divisor * divisor) > x)
	{
		return (-1);
	}
	return (natural_root(divisor + 1, x));
}
#include "holberton.h"
/**
  * _sqrt_recursion - exponent int
  * @n: int given
  * Return: x power to y
  */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (natural_root(1, n));
}
