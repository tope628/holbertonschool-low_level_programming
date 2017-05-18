#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if successful
 */

int main(void)
{
	int num1, num2, sum, even_sum;

	num1 = 1;
	num2 = 2;
	even_sum = 2;
	while (num2 < (4000000))
	{
		sum = (num1 + num2);
		if ((sum % 2) == 0)
		{
			even_sum += sum;
		}
		num1 = num2;
		num2 = sum;
	}
	printf("%d\n", even_sum);
	return (0);
}
