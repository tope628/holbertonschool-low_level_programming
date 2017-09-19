#include "sort.h"

/**
 * inserion_sort_list - insertion sort algo
 * @list: doubly linked list of integers
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *current = *list;

	for(
