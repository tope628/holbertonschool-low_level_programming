#include "holberton.h"
/**
  * _sqrt_recursion - exponent int
  * @x: int given
  * @y: int given
  * Return: x power to y
  */

int is_prime(int divisor, int x)
{
	if (x == divisor)
	{
		return (1);
	}
	if ((x % divisor) == 0)
	{
		return (0);
	}
	else
		return (is_prime(divisor + 1, x));
}
		
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(2, n));
}
