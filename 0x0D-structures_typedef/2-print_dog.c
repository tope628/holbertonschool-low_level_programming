#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * print_dog - create new dog
  * @d: pointer to new dog
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: %s\n", "(nil)");
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: %s\n", "(nil)");
		printf("Owner: %s\n", d->owner);
	}
}
