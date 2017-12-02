#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array
 *  of integers using the Jum search algorithm
 * @array: array given
 * @size: size_t of array
 * @value: target value to find
 * Return: index of value if found; otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int i = 0, step;
	int check;

	step = sqrt(size);

	if (array == NULL)
		return (-1);
	while (array[step] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += step;
		step += step;

		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (i < size && step < size)
			check = between(array, i, step, value);
		if (check == value)
			return (check);
	}
	while (array[step] > value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		check = between(array, i, step, value);
		if (check == value)
			return (check);
	}
	return (-1);
}

/**
 * between - searches for a value in an array
 *  of integers using the linear search algorithm
 * @array: array given
 * @s: size_t of array
 * @i: size_t of array
 * @val: target value to find
 * Return: index of value if found; otherwise -1
 */

int between(int *array, unsigned int i, unsigned int s, int val)
{
	printf("Value found between indexes [%d] and [%d]\n", i, s);
	while (array[i] <=  val)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == val)
			return (i);
		i++;
	}
	return (-1);
}
