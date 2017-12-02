#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: array given
 * @size: size_t of array
 * @value: target value to find
 * Return: index or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	low = 0;
	high = size - 1;
	if (array == NULL || array[0] > value)
		return (-1);
	if (size == 1 && array[0] != value)
	{
		print_search(array, size);
		return (-1);
	}
	print_search(array + low, high + 1 - low);
	while (low < high)
	{

		mid = (high + low) / 2;
		if (array[mid] == value)
			return (mid);
		if (value < array[mid])
		{
			high = mid;
		}
		else
		{
			low = mid + 1;
		}
		print_search(array + low, high + 1 - low);
	}
	return (-1);
}
/**
 * print_search - prints each element of array
 * @array: array given
 * @size: size_t of array
 */


void print_search(int *array, size_t size)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		(i == size - 1) ? printf("%d\n", array[i]) : printf("%d, ", array[i]);
	}
}
