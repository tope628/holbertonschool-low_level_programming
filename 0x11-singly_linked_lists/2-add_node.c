#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
  * add_node - print list of nodes
  * @head: pointer to list
  * @str: pointer to str
  * Return: list
  */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *list;

	if (str == NULL)
		return (NULL);
	list = malloc(sizeof(list_t));

	if (list == NULL)
		return (NULL);
	list->str = strdup(str);

	if (list->str == NULL)
	{
		free(list);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;
	list->len = i;
	list->next = *head;
	*head = list;

	return (list);
}
