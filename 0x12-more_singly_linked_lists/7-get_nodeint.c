#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
  * get_nodeint_at_index - print list of nodes
  * @head: pointer to list
  * @index: pointer to str
  * Return: list
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *list = head;
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
