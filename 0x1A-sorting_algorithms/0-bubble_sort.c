#include "sort.h"

/**
 * bubble_sort - bubble sort algo
 * @array: array of integers
 * @size: size of an array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j = 0;
	int tmp;

	if (array || size == 0)
		return;

	while (j < size - 1)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i + 1] < array[i])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
		j++;
	}
}
