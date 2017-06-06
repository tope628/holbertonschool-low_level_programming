#include <stdio.h>
#include <stdlib.h>
/**
  * main - args
  * @argc: count
  * @argv: name
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = x * y;
	printf("%d\n", z);
	return (0);
}
