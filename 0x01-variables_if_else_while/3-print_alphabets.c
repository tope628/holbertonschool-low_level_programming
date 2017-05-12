#include <stdio.h>
/**
* main - start of code to print alphabet in lower and uppercase
* Return: 0 if successful
*/
int main(void)
{
	char alp = 'a';
	char ALP = 'A';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	while (ALP <= 'Z')
	{
		putchar(ALP);
		ALP++;
	}
	putchar('\n');

	return (0);
}
