#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - create new dog
  * @d: pointer to new dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
