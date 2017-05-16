#include "holberton.h"

/**
* print_alphabet -print alphabet
* Return: void
*/
void print_alphabet(void)
{
		char let = 'a';

		while (let <= 'z')
		{
			_putchar(let);
			let++;
		}
		_putchar('\n');
}
