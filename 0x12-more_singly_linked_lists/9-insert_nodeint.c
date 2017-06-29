#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
  * insert_nodeint_at_index - print list of nodes
  * @head: pointer to list
  * @idx: pointer to str
  * @n: pointer to str
  * Return: list
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *list = *head;
	listint_t *new;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}

	while (list && count <= idx)
	{
		if (count == idx - 1)
		{
			new->next = list->next;
			list->next = new;

			return (new);
		}
		count++;
		list = list->next;
	}
	free(new);
	return (NULL);
}
