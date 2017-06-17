#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(va_list list);
void print_i(va_list list);
void print_f(va_list list);
void print_s(va_list list);

typedef struct correct_format
{
	char *per;
	void (*f)();
}cor_f;

#endif /**_VARIADIC_FUNCTIONS_H_ */
