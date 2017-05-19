#include "holberton.h"

/**
* more_numbers - print numbers
* Return: void
*/
void more_numbers(void)
{
		int num, count, ones;

		for (count = 0; count < 10; count++)
		{
			for (num = 0; num < 15; num++)
			{
				ones = num % 10;

				if (num > 9)
				{
					_putchar('1');
				}
				_putchar(ones + '0');

			}
		_putchar('\n');
		}
}
