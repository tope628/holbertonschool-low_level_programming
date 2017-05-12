#include <stdio.h>
/**
* main - start of code to print alphabet exceept q and e
* Return: 0 if successful
*/
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp != 'q' && alp != 'e')
			putchar(alp);
		alp++;
	}
	putchar('\n');

	return (0);
}
