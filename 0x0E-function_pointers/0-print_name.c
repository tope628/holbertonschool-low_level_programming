#include "function_pointers.h"
/**
  * print_name - prints name
  * @name: name to print
  * @f: function pointer
  * Return: voided
  */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
