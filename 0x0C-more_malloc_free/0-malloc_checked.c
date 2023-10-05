#include <stdlib.h>

/**
 * *malloc_checked - function that allocated mem using malloc
 * @b: the number of bytes to be allocated by the malloc funct
 * Return: A pointer to the allocated mem, else
 * 98 if malloc fails.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit (98);
	return (ptr);
}
