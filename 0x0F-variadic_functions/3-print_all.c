#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_all - prints different formats
  * @format: format given as a string
  * Return: proper format printed
  */

void print_all(const char * const format, ...)
{
	cor_f f[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_list list;
	int i = 0, j = 0;
	va_start(list, format);

	while (format[i] && format)
	{
		while (f[j].per)
		{	
			if (f[j].per[0] == format[i])
			{
				f[j].f(list);
			}
		}
		if (f[j].per == NULL)
		{
			printf("(nil)");
		}
		j++;
	}
	i++;
	j = 0;
va_end(list);
putchar('\n');
}
void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}
void print_i(va_list list)
{
	printf("%i", va_arg(list, int));
}
void print_f(va_list list)
{
	printf("%f", va_arg(list, double));
}
void print_s(va_list list)
{
	printf("%s", va_arg(list, char *));
}
