#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
  * print_strings - prints strings
  * @separator: comma given
  * @n: number  of arguments given
  * Return: string followed by new line
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	char *str;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(nums, char *); 
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(nums);
}
