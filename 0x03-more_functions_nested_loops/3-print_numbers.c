#include "holberton.h"

/**
* print_numbers - print numbers
* Return: void
*/
void print_numbers(void)
{
		int num = '0';

		while (num <= '9')
		{
			_putchar(num);
			num++;
		}
		_putchar('\n');
}
