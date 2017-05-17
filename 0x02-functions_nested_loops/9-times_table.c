#include "holberton.h"
/**
* times_table - print 9 times table
* Return: void
*/
void times_table(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			int answer;

			answer = (num2 * num1);

			if (answer <= 9)
			{
				if ((answer == 0) && (num2 == 0))
				{
					_putchar(answer + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(answer + '0');
				}
			}
			else
			{
				int tens, ones;

				tens = answer / 10;
				ones = answer % 10;

				_putchar(tens + '0');
				_putchar(ones + '0');
			}
			if (num2 != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
