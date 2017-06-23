#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
  * add_node_end - print list of nodes
  * @h: pointer to list
  * Return: size_t int
  */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *list, *t;

	if (str == NULL)
		return (NULL);
	list = malloc(sizeof(list_t));

	if (list == NULL)
		return (NULL);
	list->str = strdup(str);

	if (list->str == NULL)
	{
		free(list);
		return(NULL);
	}

	for (i = 0; str[i]; i++)
		;
	list->len = i;
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
       return(list);
}       
