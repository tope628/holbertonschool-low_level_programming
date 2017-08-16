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
		new->prev = NULL;
		if (*h != NULL)
		{
			(*h)->prev = new;
		}
		*h = new;
		return new;
	}
	
	for (; count < idx - 1; count++, list = list->next)
	{
		if (list->next == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->prev = list;
	new->next = list->next;
	list->next = new;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
