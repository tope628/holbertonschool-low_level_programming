#include <stdio.h>
/**
* main - start of code to print alphabet
* Return: 0 if successful
*/
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');

	return (0);
}
