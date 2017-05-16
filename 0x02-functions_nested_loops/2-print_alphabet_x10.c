#include "holberton.h"

/**
* print_alphabet - print alphabet 10 times
* Return: void
*/
void print_alphabet_x10(void)
{
	int num = '0';

	while (num <= '9')
	{
		char let = 'a';
		while (let <= 'z')
		{
			_putchar(let);
			let++;
		}
	num++;
	_putchar('\n');
	}

	return;
}
