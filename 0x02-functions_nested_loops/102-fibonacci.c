#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if successful
 */

int main(void)
{
	unsigned long int count, num1, num2, sum;

	num1 = 1;
	num2 = 2;
	printf("%lu, %lu, ", num1, num2);
	for (count = 1; count < 50; count++)
	{
		if ((num2 > num1) && (count < 49))
		{
			sum = (num1 + num2);
			printf("%lu, ", sum);
		}
		else
		{
			sum = (num1 + num2);
			printf("%lu\n", sum);
		}
		num1 = num2;
		num2 = sum;
	}
	count++;
	return (0);
}
