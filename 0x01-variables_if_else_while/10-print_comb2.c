#include <stdio.h>
/**
* main - start of code to print double digit
* numbers with commas and space
* Return: 0 if successful
*/
int main(void)
{
	int num1 = '0';
	int num2 = '0';

	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			putchar(num1);
			putchar(num2);
			if ((num2 != '9') || (num1 != '9'))
			{
				putchar(44);
				putchar(32);
			}
			num2++;
		}
		num1++;
		num2 = '0';
	}
	putchar('\n');

	return (0);
}
