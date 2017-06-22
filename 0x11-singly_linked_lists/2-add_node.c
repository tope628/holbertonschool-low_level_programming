#include "lists.h"
#include <stdio.h>
/**
  * list_len - print list of nodes
  * @h: pointer to list
  * Return: size_t int
  */
struct Node{
	char data;
	struct Node* next;
};
struct Node* head;

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	const list_t *list = h;

	for (; list; list = list->next, i++)
		;

	return (i);
}
