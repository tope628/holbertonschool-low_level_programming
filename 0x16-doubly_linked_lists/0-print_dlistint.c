#include "lists.h"
/**
  * print_dlistint - print list of nodes
  * @h: pointer to list
  * Return: size_t int
  */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;
	const dlistint_t *list = h;

	for (; list; list = list->next, i++)
	{
		printf("%d\n", list->n);
	}
	return (i);
}
