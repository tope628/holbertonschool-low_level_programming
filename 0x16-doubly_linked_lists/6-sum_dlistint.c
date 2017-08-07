#include "lists.h"

/**
  * sum_dlistint - print list of nodes
  * @head: pointer to list
  * Return: list
  */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *list = head;
	unsigned int sum = 0;

	while (list)
	{
		sum += list->n;
		list = list->next;
	}
	if (list)
	{
		return (0);
	}
	else
	{
		return (sum);
	}
}
