#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid function.
 * @grid: Pointer to the 2D grid.
 * @height: Height of the grid.
 *
 * Description: Frees the memory allocated for the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
