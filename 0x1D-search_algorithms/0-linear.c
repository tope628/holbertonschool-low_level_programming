#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the Linear search algorithm
 * @array: array given
 * @size: size_t of array 
 * @value: target value to find
 */

int linear_search(int *array, size_t size, int value) {
	unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size - 1; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}