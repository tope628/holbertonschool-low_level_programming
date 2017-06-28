#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
  * add_nodeint_end - print list of nodes
  * @head: pointer to list
  * @n: pointer to str
  * Return: list
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list, *t;

	list = malloc(sizeof(listint_t));

	if (list == NULL)
		return (NULL);

	list->next = NULL;
	list->n = n;

	if (*head == NULL)
	{
		*head = list;
		return (list);
	}
	t = *head;
	while (t->next)
	{
		t = t->next;
	}
	t->next = list;

	return (list);
}
