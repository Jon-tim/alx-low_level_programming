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
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
