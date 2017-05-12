#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - start of code to print random number
* determine if its 0, pos, or ,neg
* Return: 0 if successful
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
