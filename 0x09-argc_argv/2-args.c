#include <stdio.h>
#include <stdlib.h>
/**
  * main - args
  * Return: 0 
  */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
        exit(EXIT_SUCCESS);

}
