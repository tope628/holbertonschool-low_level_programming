#include "sort.h"

/**
 * shell_sort - shell sort algorithim
 * @array: array given
 * @size size of the array given
 */

void shell_sort(int *array, size_t size)
{
	int i, j, tmp, gap = 1;

	for (i = gap; i < size; i++)
	{
		gap = gap * 3 + 1;
		tmp = array[gap];
		for (j = i; j >= gap; j -= gap)
		{
			array[j] = array[j - gap];
		}
		array[j] = tmp;
	}
}
