#include <stdio.h>
#include "variadic_functions.h"
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
  * print_i - prints different formats
  * @list: format given as a string
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
		str = "(nil)";
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
	char *sep = "";

	va_start(list, format);

	while (format[i] && format)
	{
		j = 0;
		while (f[j].per != NULL)
		{
			if (*(f[j].per) == format[i])
			{
				printf("%s", sep);
				f[j].f(list);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
va_end(list);
printf("\n");
}
