#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - create new dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  * Return: pointer to new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *woof;

	woof = malloc(sizeof(dog_t));
	if (woof == NULL)
		return (NULL);
	woof->name = name;
	woof->age = age;
	woof->owner = owner;

	return (woof);
}
