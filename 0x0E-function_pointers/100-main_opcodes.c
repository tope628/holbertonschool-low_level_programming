#include <stdlib.h>
#include <stdio.h>

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
	if (argc <= 0)
	{
		printf("Error\n");
		exit (2);
	}
	for (i = 0; i < num; i++)
	{
		printf("%x", address[i]);
		if (i < num - 1)
		{
			putchar(' ');
		}
	}	
       putchar('\n');	
	return (0);
}
