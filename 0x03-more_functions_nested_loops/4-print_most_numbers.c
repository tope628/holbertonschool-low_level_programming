#include "holberton.h"

/**
* print_most_numbers - print numbers
* Return: void
*/
void print_most_numbers(void)
{
		int num = '0';

		while (num <= '9')
		{
			if ((num != '2') && (num != '4'))
			{
				_putchar(num);
			}
				num++;
		}
		_putchar('\n');
}
