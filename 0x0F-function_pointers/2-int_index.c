#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Function that searches for and integer
 * @array: Pointer to an int array, were serching will be occur
 * @size: The number of elements in the array
 * @cmp: Function pointer used to compare values, has int para and int return
 * Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != 0 && cmp != 0)
			for (i = 0; i < size; i++)
				if (cmp(array[i]) != 0)
					return (i);
	}
	return (-1);
}
