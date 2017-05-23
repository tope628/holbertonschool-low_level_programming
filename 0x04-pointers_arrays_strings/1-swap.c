#include "holberton.h"
/**
  * swap_int - updates value to 98
  * @b: integer given
  * @a: integer given
  * Return: voided
  */

void swap_int(int *a, int *b)
{
	int x;
	x = *a;
	*a = *b;
	*b = x;
}
