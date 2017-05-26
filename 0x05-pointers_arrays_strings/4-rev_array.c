#include "holberton.h"
/**
  * reverse_array - prints string in reverse
  * @a: string given
  * @n: given
  * Return: string
  */

void reverse_array(int *a, int n)
{
	int i;
	int x = 0;
	int array[20];

	for (i = 0; (i < n); i++)
	{
		*(array + i) = *(a + i);
	}
	i -= 1;
	while (x < n)
	{
		*(a + x) = *(array + i);
		x++;
		i--;
	}
}
