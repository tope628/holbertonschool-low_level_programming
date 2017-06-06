#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - args
  * @argc: count
  * @argv: name
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int x, y, z = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (isdigit(argv[x][y]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		z += atoi(argv[x]);
	}
	printf("%d\n", z);
	return (0);
}
