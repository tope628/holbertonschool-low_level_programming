#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, x;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		x = (i * size) + i;
		sum1 += *(a + x);
	}
	for (j = 0; j < size; j++)
	{
		x = (j * size) + (size - 1 - j);
		sum2 += *(a + x);
	}
	printf("%i, %i\n", sum1, sum2);
}
