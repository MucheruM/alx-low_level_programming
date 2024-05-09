#include "search_algos.h"

/**
 * linear_search - A func that searches for a value in
 * and array of integers using the linear search algorithm
 *
 * @array: Pointer to a array of integers
 * @size: The size of the array in memory
 * @value: The value of the search results
 *
 * Return: Returns value to the func caller
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
