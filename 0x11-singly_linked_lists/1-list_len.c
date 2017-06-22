#include "lists.h"
#include <stdio.h>
/**
  * list_len - print list of nodes
  * @h: pointer to list
  * Return: size_t int
  */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;
	const list_t *list = h;

	for (; list; list = list->next, i++)
		;

	return (i);
}
