#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function that frees dogs
 * @d: Pointer to the mem location to be freed
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d) /* Short hand for if (d != NULL) */
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d); /*Free mem allctd for typedef dog_t struct*/
	}
}
