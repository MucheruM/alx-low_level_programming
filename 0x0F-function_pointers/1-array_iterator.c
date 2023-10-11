#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Execute a func given as a para on @ element of an array
 * @array: Pointer to an int array, were action will be performed
 * @size: Reps the size of the array in bytes becz of size_t
 * @action: function pointer with int para and no return
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != 0 && action != 0)
		for (i = 0; i < size; i++)
			action(array[i]);
}
