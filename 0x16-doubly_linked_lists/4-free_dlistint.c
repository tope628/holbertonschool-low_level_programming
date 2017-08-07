#include "lists.h"

/**
 * free_dlistint - frees a list_t list
 * @head: pointer to the start of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list, *next;

	list = head;
	while (list)
	{
		next = list->next;
		free(list);
		list = next;
	}

}
