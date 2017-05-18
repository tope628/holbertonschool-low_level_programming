#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if successful
 */

int main(void)
{
	int count, num1, num2, sum;
	num1 = 1;
	num2 = 2;
	printf("%d\n", num1);
	printf("%d\n", num2);
	for (count = 1; count <= 50; count++)
	{
		if (num2 > num1)
		{
			sum = (num1 + num2);
			printf("%d\n", sum);
		}
		num1 = num2;
		num2 = sum;
	}
	count++;
	return (0);
}
