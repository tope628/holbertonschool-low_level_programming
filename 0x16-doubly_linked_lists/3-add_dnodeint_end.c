#include "lists.h"

/**
  * add_dnodeint_end - print list of nodes
  * @head: pointer to list
  * @n: pointer to string
  * Return: list
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *list, *t;

	list = malloc(sizeof(dlistint_t));

	if (list == NULL)
		return (NULL);


	list->n = n;
	list->next = NULL;
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
