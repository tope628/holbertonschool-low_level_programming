#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
  * print_numbers - prints numbers
  * @separator: comma given
  * @n: number  of arguments given
  * Return: numbers as string followed by new line
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(nums);
}
