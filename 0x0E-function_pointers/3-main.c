#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - get arguments to run in other functions
  * @argc: argument count
  * @argv: position if argument
  * Return: int
  */

int main(int argc, char *argv[])
{
	int answer, num1, num2;
	int (*ptrf)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ptrf = get_op_func(argv[2]);

	if (ptrf == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	answer = ptrf(num1, num2);
	printf("%d\n", answer);
	return (0);

}
