#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
  * add_nodeint - print list of nodes
  * @head: pointer to list
  * @n: pointer to str
  * Return: list
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list;

	list = malloc(sizeof(listint_t));

	if (list == NULL)
		return (NULL);

	list->next = *head;
	list->n = n;
	*head = list;

	return (list);
}
