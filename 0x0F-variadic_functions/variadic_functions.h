#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
/**
  * struct correct_format -  print specific type
  * @per: type
  * @f: function
  */
typedef struct correct_format
{
	char *per;
	void (*f)(va_list);
} cor_f;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(va_list list);
void print_i(va_list list);
void print_f(va_list list);
void print_s(va_list list);


#endif /**_VARIADIC_FUNCTIONS_H_ */
