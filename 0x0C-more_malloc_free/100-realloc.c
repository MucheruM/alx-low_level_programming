#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - reallocated mem block using malloc and free
 * @old_siz: previous assigned mem space size
 * @new_size: the mem space we want to assign
 * Return: a pointer of anytype we choose
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{ /* NB. *ptr can not be used because its void hence cannot be dereferenced */
	char *new_mem, *old_mem = ptr; /* we cast with another pointer to use */
	unsigned int i, min_size = new_size;

	if (ptr == NULL)
	{
		new_mem = malloc(new_size);
		return (new_mem);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	new_mem = malloc(new_size);
	if (new_mem == NULL)
		return (NULL);

	if (new_size > old_size)
		min_size = old_size;

	for (i = 0; i < min_size; i++)
		new_mem[i] = old_mem[i];
	free(ptr);

	return (new_mem);
}
