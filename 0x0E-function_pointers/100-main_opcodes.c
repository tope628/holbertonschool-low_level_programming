#include <stdlib.h>
#include <stdio.h>

/**
  * main - print opcodes
  * @argc: argument count
  * @argv: seperate arguments
  * Return: 0 if successful
  */

int main(int argc, char *argv[])
{
	unsigned char *address = main;
	int i;
	int num = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < num; i++)
	{
		if (num - 1 == i)
		{
			printf("%02x\n", address[i]);
		}
		else
		{
			printf("%02x ", address[i]);
		}
	}
	return (0);
}
