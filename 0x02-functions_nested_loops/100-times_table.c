#include "holberton.h"
/**
* print_times_table - print n times table
* Return: void
* @n: integer given
*/
void print_times_table(int n)
{
	int y, x, answer, tens, ones, huns;

	if ((n < 15) && (n >= 0))
	{
		for (y = 0; y <= n; y++)
		{
			for (x = 0; x <= n; x++)
			{
				answer = (y * x);
				if (answer <= 9)
				{
					if ((answer == 0) && (x == 0))
					{
						_putchar(answer + '0');
					}
					else
					{
						_putchar(' '); _putchar(' '); _putchar(answer + '0');
					}
				}
				else if (answer < 100)
				{
					tens = answer / 10; ones = answer % 10;
					_putchar(' '); _putchar(tens + '0'); _putchar(ones + '0');
				}
				else
				{
					huns = answer / 100; tens = ((answer / 10) % 10); ones = answer % 10;
					_putchar(huns + '0'); _putchar(tens + '0'); _putchar(ones + '0');
				}
				if (x != n)
				{
				_putchar(','); _putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
