#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - frees a list_t list
 * @head: pointer to the start of the list
 *
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *list;
	int i;

	if (*head == NULL)
		return (0);
	list = *head;
	*head = (*head)->next;
	i = list->n;
	free(list);

	return (i);
}
