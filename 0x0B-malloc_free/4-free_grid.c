#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid previously created in the alloc_grid
 * @grid: pointer to the 2D array
 * @height: number of rows in the array
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
	{
		/* free mem allocated for @ row, inner array of int */
		free(grid[row]);
	}
	/* free mem allocated for ptrs to the row, outer array of ptrs */
	free(grid);
}
