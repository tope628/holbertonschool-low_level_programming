#include "sort.h"

/**
 * insertion_sort_list - insertion sort algo
 * @list: doubly linked list of integers
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *next, *current = (*list)->next;

	if (list == NULL || *list == NULL)
		return;

	while (current)
	{
		next = current->next;
			while (current->prev && current->prev->n > current->n)
		{
				swap(list, current);
				print_list(*list);
		}
		current = next;
	}
}
/**
 * swap - swap nodes of a doubly linked list
 * @array: start of dll
 * @current: current node to be swapped
 */

void swap(listint_t **array, listint_t *current)
{
	current->prev->next = current->next;

	if (current->next)
		current->next->prev = current->prev;

	current->next = current->prev;
	current->prev = current->next->prev;
	current->next->prev = current;

	if (current->prev == NULL)
	{
		*array = current;
	}
	else
	{
		current->prev->next = current;
	}
}
