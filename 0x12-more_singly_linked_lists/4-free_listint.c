#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: pointer to the start of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *list, *next;

	list = head;
	while (list)
	{
		next = list->next;
		free(list);
		list = next;
	}

}
