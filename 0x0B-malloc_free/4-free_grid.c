#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up a 2d grid
 * @grid: doubles a pointer 2d grid
 * @height: heights of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
