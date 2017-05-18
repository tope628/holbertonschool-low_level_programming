#include "holberton.h"

/**
* print_most_numbers - print numbers
* Return: void
*/
void print_most_numbers(void)
{
		int num = '0';
		int ones = '0';

		for (count = 0; count <= 9; count++)
		if (num <= '9')
		{
			_putchar(num);
			num++;
		}
		else
		{
			if (ones <= '4')
			{
				_putchar('1');
				_putchar(ones);
				ones++;
			}
		}
		_putchar('\n');
}
