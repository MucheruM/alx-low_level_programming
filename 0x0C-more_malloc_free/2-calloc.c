#include <stdlib.h>

/**
* *_calloc - Allocate contiguous mem of an array
* @nmemb: number of elements to be allocated
* @size: size of each element in bytes
* Return: any type of pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return(NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return(NULL);
	/* nmemb * size means total mem needed */
	for (x = 0; x < (nmemb * size); x++)
		ptr[x] = 0;
	return(ptr);
}
