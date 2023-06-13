#include "main.h"

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid
 *
 * @grid: Pointer to the 2D grid to be freed
 * @height: Height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (!grid)
		return;
	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
