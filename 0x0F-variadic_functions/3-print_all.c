#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_c - prints different formats
  * @list: format given as a string
  * Return: proper format printed
  */
void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
  * print_all - prints different formats
  * @format: format given as a string
  * Return: proper format printed
  */

void print_i(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
  * print_f - prints different formats
  * @list: format given as a string
  * Return: proper format printed
  */

void print_f(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
  * print_s - prints different formats
  * @list: format given as a string
  * Return: proper format printed
  */
void print_s(va_list list)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
		str ="(nil)";
	printf("%s", str);
}
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

	while (format[i] != '\0' && format != '\0')
	{
		while (f[j].per != NULL)
		{	
			if (f[j].per[0] == format[i])
			{
				f[j].f(list);
				printf(", ");
			}
		j++;
		}
	i++;
	j = 0;
	}
va_end(list);
putchar('\n');
}
