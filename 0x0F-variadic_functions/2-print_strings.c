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

	va_start(nums, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%s", va_arg(nums, char *));
			}
			/**else if ((va_args(nums, char *)) == NULL)
			{
				printf("(nil)");
			}*/
			else
			{
				printf("%s%s", va_arg(nums, char *), separator);
			}
		}
	}
	putchar('\n');
}
