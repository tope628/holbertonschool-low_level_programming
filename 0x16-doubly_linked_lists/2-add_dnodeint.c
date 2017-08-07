#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
  * add_node - print list of nodes
  * @head: pointer to list
  * @str: pointer to str
  * Return: list
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *list;

	list = malloc(sizeof(dlistint_t));

	if (list == NULL)
		return (NULL);

	list->n = n;
	list->next = *head;
	*head = list;

	return (list);
}
