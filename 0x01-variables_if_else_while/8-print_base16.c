#include <stdio.h>
/**
* main - start of code to print alphabet in base 16
* Return: 0 if successful
*/
int main(void)
{
	int base = 48;

	while (base <= 57)
	{
		putchar(base);
		base++;
	}

	base = 97;
	while (base <= 102)
	{
		putchar(base);
		base++;
	}
	putchar('\n');

	return (0);
}
