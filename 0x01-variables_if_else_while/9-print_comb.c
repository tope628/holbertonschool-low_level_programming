#include <stdio.h>
/**
* main - start of code to print numbers with commas and space
* Return: 0 if successful
*/
int main(void)
{
	int nums = '0';

	while (nums <= '9')
	{
		putchar(nums);
		if (nums != '9')
		{
			putchar(44);
			putchar(32);
		}
		nums++;
	}
	putchar('\n');

	return (0);
}
