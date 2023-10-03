#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - Function that returns pointer to a 2D array of int
 * @width: row of the array
 * @height: height of the array
 * Return: NULL on failure & if width and heigh == 0 || -ve
 */
int **alloc_grid(int width, int height)
{
	int column, row;
	int **ptr; /* pointer to 2D array */

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *)); /* int* specfies size in mem */
	if (ptr == NULL) /* if memory allocation failes Rtrn NULL */
		return (NULL);

	for (row = 0; row < height; row++) /* iterate each row */
	{ /* Allocate mem for column of current row */
		ptr[row] = malloc(width * sizeof(int));
		if (ptr[row] == NULL)
		{
			while (row >= 0)
			{
				free(ptr[row]);
				row--;
			}
			free(ptr); /* free mem allocd for row pointers */
			return (NULL);
		}
		for (column = 0; column < width; column++) /* iterate @ colmn */
			ptr[row][column] = 0;
	}
	return (ptr); /* return pointer to 2D array */
}
