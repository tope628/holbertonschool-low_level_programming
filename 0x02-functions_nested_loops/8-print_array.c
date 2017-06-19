#include "holberton.h"
#include <stdio.h>
/**
  * print_array - prints string
  * @a: string given
  * @n: number of elements in array to be printed
  * Return: string
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
