#include "holberton.h"

/**
* print_alphabet - print alphabet 10 times
* Return: void
*/
void times_table(void)
{
	int num1 = 0;

	while (num1 <= 9)
	{
		int num2 = 0;
		while (num2 <= 9)
		{
			int answer;

			answer = num2 * num1;
			_putchar(answer);
			num2++;
		}
		num1++;
	}
	_putchar('\n');

	return;
}
