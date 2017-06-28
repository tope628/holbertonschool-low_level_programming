#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 * @head: pointer to the start of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *list, *next;
	
	if (head == NULL)
		return (NULL);

	list = *head;
	while (list)
	{
		next = list->next;
		free(list);
		list = next;
		*head = NULL;
	}
}
