#include "main.h"

/**
 * free_grid - removing malloc
 * @grid: grid to be freed
 * @height: height of matrix
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
