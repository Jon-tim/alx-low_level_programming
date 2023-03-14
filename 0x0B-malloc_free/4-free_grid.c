#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2d grid
 * @grid: grid to be fred
 * @height: height of grid
 * Return: freed grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
