#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
  * sum_listint - print list of nodes
  * @head: pointer to list
  * Return: list
  */

int sum_listint(listint_t *head)
{
	listint_t *list = head;
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
