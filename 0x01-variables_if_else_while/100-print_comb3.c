#include <stdio.h>
/**
* main - start of code to print double digit
* numbers that are different combos with commas and space
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
			if (num1 != num2)

				putchar(num1);
				putchar(num2);

			else
				num2++;
		}
				putchar(44);
				putchar(32);
		}
			num1++;
	}

	putchar('\n');

	return (0);
}
