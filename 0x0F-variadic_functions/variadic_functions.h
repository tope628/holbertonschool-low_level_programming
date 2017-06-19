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

#endif /**_VARIADIC_FUNCTIONS_H_ */
