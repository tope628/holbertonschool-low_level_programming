#include <stdio.h>
/**
* main - start of code to print alphabet in reverse
* Return: 0 if successful
*/
int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');

	return (0);
}
