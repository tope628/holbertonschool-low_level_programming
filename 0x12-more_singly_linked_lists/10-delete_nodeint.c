#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
  * delete_nodeint_at_index - print list of nodes
  * @head: pointer to list
  * @idx: pointer to str
  * @n: pointer to str
  * Return: list
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *list = *head;
	listint_t *new;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		new = (*head)->next;
		free(*head);
		*head = new;

		return (1);
	}

	while (list && count < index - 1)
	{
		if (list->next == NULL)
		{
			return (-1);
		}
		count++;
		list = list->next;
	}
	new = list->next;
	new->next = list->next;
	free(new);
	return (1);
}
