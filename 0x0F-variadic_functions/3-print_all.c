#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - print char
 * @c: a char
 * Return: nothing
 */
void print_c(va_list c)
{
  printf("%c", va_arg(c, int));
}

/**
 * print_i - print integer
 * @i: an int
 * Return: nothing
 */
void print_i(va_list i)
{
  printf("%i", va_arg(i, int));
}

/**
 * print_f - print float
 * @f: a float
 * Return: nothing
 */
void print_f(va_list f)
{
  printf("%f", va_arg(f, double));
}

/**
 * print_s - print string
 * @s: a string
 * Return: nothing
 */
void print_s(va_list s)
{
  char *string = va_arg(s, char*);

  if (string == NULL)
    string = "(nil)";

  printf("%s", string);
}

/**
 * print_all - prints anything
 * @format: any format
 * Return: anything
 */
void print_all(const char * const format, ...)
{
  print_t p[] = {
    {"c", print_c},
    {"s", print_s},
    {"i", print_i},
    {"f", print_f},
    {NULL, NULL}
  };

  va_list valist;
  unsigned int i = 0, j = 0;
  char *separator = "";

  va_start(valist, format);

  while (format && format[i])
    {
      j = 0;
      while (p[j].t != NULL)
	{
	  if (*(p[j].t) == format[i])
	    {
	      printf("%s", separator);
	      p[j].f(valist);
	      separator = ", ";
	    }
	  j++;
	}
      i++;
    }
  va_end(valist);
  printf("\n");
}
