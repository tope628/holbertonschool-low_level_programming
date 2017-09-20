#include "sort.h"

/**
 * quick_sort - quick sort algorithm
 * @array: array givin
 * @size size of the array
 */

void quick_sort(int *array, size_t size)
{
	int right, left;

	if(!array || size == 0)
		return;
	right = size - 1;
	left = 0;

	sort_quick(array, left, right, size);
}

void sort_quick(int *array, int left, int right, size_t size)
{
	int part_idx;

	if(left < right)
	{
		part_idx = L_partition(array, left, right, size);
		sort_quick(array, left, part_idx - 1, size);
		sort_quick(array, part_idx + 1, right, size);
	}
}

int L_partition(int *array, int left, int right, size_t size)
{
	int pivot, i, j, tmp;

	pivot = array[right];
	i = left - 1;

	for (j = left; j <= right - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[j];
				array[j] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
		}
	}
	return (i);
}
