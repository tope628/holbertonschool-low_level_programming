#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_c - prints different formats
  * @c: format given as a string
  * Return: proper format printed
  */

void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
  * print_i - prints different formats
  * @i: format given as a string
  * Return: proper format printed
  */
void print_i(va_list i)
{
	printf("%i", va_arg(i, int));
}

/**
  * print_f - prints different formats
  * @f: format given as a string
  * Return: proper format printed
  */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
  * print_s - prints different formats
  * @s: format given as a string
  * Return: proper format printed
  */
void print_s(va_list s)
{
	char *string = va_arg(s, char*);

	if (string == NULL)
		string = "(nil)";

	printf("%s", string);
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
	unsigned int i = 0, j = 0;
	char *sep = "";

	va_start(list, format);

	while (format && format[i])
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
