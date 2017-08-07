#include "lists.h"

/**
  * insert_dnodeint_at_index - print list of nodes
  * @h: pointer to list
  * @idx: pointer to str
  * @n: pointer to str
  * Return: list
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *list = *h;
	dlistint_t *new;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		new->prev = NULL;

	}

	while (list && count < idx)
	{
		if (count == idx - 1)
		{
			new->prev = list;
			new->next = list->next;
			list->next = new;

		}
		count++;
		list = list->next;
	}
	return (new);
}
