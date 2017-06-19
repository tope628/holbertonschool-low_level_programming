#include <stdio.h>
/**
* main - entry point
* Return: 0 if successful
*/

int main(void)
{
	long int n = 148;
	long int max, divisor;

	divisor = 2;

	while (n > 0)
	{
		if (n % divisor)
		{
			divisor++;
		}
		else
		{
			max = n;
			n = n / divisor;

			if  (n  == 1)
			{
				printf("%li", max);
				break;
			}
		}
	}
	putchar('\n');
	return (0);
}

