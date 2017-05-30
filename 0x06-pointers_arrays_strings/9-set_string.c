#include "holberton.h"
/**
  *set_string - sets the value of a pointer to a char
  * @to: given pointer
  * @s: given pointer to pointer
  * Return: void
  */

void set_string(char **s, char *to)
{
	**s = *to;
}

