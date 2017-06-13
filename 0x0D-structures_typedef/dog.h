#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - creating a dog
 * @name: dog name
 * @owner: owner of dog
 * @age: number
 * Description: creating a dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* _DOG_H_ */
