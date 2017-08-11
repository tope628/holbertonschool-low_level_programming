#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
  * add_dnodeint - print list of nodes
  * @head: pointer to list
  * @n: pointer to str
  * Return: list
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *list;

	if (head == NULL)
		return (NULL);
	list = malloc(sizeof(dlistint_t));

	if (list == NULL)
		return (NULL);

	list->n = n;
	list->prev = NULL;
	list->next = *head;
	if (*head != NULL)
		(*head)->prev = list;
	*head = list;
	return (list);
}
