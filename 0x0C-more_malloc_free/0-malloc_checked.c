#include <stdlib.h>

/**
 * *malloc_checked - function that allocated mem using malloc
 * @b: the number of bytes to be allocated by the malloc funct
 * Return: A pointer of ANYTYPE to the allocated mem and,
 * if it fails Exit(98)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
