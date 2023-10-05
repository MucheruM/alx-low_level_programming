#include <stdlib.h>

/**
 * *array_range - function that creates an array of int
 * @min: smallest value in the array
 * @max: largest value in the array
 * Result: pointer to an array of int
 */
int *array_range(int min, int max)
{
	int *ptr;
	int x, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		ptr[x] = min++;

	return (ptr);
}
