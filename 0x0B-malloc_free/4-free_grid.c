#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: the grid to free
 * @height: height of the grid to free
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;

	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
