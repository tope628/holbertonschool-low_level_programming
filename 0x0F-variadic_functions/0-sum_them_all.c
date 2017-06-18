#include "variadic_functions.h"

/**
  * sum_them_all - sums all parameters
  * @n: number of arguments given
  * Return: sum
  */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list nums;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
