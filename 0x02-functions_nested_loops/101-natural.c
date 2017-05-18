#include <stdio.h>

/**
* main - Entry point
*
* Description - sum of multiples of 5 and 3
*
* Return: 0 if succesful
*/

int main(void)
{
	int num, sum;

	for (num = 0; num < 1024; num++)
	{
		if (((num % 3) == 0) || ((num % 5) == 0))
		{
			sum += num;
		}
	}
	printf("%u\n", sum);
	return (0);
}

