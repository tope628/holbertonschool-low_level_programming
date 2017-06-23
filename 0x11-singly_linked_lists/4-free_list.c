#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the start of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *list, *next;

	list = head;
	while (list)
	{
		next = list->next;
		free(list->str);
		free(list);
		list = next;
	}

}
