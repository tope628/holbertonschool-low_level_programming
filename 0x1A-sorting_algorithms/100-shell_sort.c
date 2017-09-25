#include "sort.h"

/**
 * shell_sort - shell sort algorithim
 * @array: array given
 * @size: size of the array given
 */

void shell_sort(int *array, size_t size)
{
	size_t i, j, gap = 1;
	int tmp;

	if (!array || size < 2)
		return;

	while (gap < size / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= gap && array[j - gap] > tmp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = tmp;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
