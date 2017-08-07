#include "lists.h"

/**
  * get_dnodeint_at_index - print list of nodes
  * @head: pointer to list
  * @index: pointer to str
  * Return: list
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *list = head;
	unsigned int count = 0;

	while (list)
	{
		if (count == index)
			return (list);
		count++;
		list = list->next;
	}
	return (NULL);
}
