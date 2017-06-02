#include "holberton.h"
/**
  * is_prime - find prime int
  * @x: int given
  * @divisor: variable
  * Return: 0 or 1
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
#include "holberton.h"
/**
  * is_prime_number - find prime int
  * @n: int given
  * Return: 0 or 1
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(2, n));
}
