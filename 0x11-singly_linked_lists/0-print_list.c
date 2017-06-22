#include "lists.h"
#include <stdio.h>
/**
  * print_list - print list of nodes
  * @h: pointer to list
  * Return: size_t int
  */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *list = h;

	for (; list; list = list->next, i++)
	{
		printf("[%u] %s\n", list->len, list->str);
	}
	return (i);
}
