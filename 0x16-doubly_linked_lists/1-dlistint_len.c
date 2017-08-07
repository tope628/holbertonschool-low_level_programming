#include "lists.h"
/**
  * dlistint_len - print list of nodes
  * @h: pointer to list
  * Return: size_t int
  */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;
	const dlistint_t *list = h;

	for (; list; list = list->next, i++)
		;

	return (i);
}
