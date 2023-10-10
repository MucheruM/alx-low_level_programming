#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize a variable of typw struct dog
 * @d: The struct to be initialized
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the master of the dog
 * Return: Function returns Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;

}
