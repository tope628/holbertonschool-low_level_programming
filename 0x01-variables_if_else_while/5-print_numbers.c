#include <stdio.h>
/**
* main - start of code to print numbers
* Return: 0 if successful
*/
int main(void)
{
	char nums = '0';

	while (nums <= '9')
	{
		putchar(nums);
		nums++;
	}
	putchar('\n');

	return (0);
}
