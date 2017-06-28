#include "lists.h"
#include <stdio.h>
/**
  * print_listint - print list of nodes
  * @h: pointer to list
  * Return: size_t int
  */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t *list = h;

	for (; list; list = list->next, i++)
	{
		printf("%i\n", list->n);
	}
	return (i);
}
