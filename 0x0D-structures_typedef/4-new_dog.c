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
	unsigned int i, j, k;
	dog_t *woof;

	if (name == NULL || owner == NULL)
		return (NULL);

	woof = malloc(sizeof(dog_t));
	if (woof == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	i++;
	for (j = 0; owner[j]; j++)
		;
	j++;

	woof->name = malloc(i * sizeof(char));
	if (woof->name == NULL)
	{
		free(woof);
		return (NULL);
	}
	woof->owner = malloc(j * sizeof(char));
	if (woof->owner == NULL)
	{
		free(woof);
		free(woof->name);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		woof->name[k] = name[k];
	for (k = 0; k < j; k++)
		woof->owner[k] = owner[k];
	woof->age = age;

	return (woof);
}
