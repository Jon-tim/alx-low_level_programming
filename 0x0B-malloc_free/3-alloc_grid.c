#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - create 2 dimensional array of integers
 * @width: row of the array
 * @height: column of the array
 * Return: A pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return NULL;
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return NULL;

	arr[0] = malloc((width * height) * sizeof(int));
	if (arr[0] == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
		arr[i] = arr[i - 1] + width;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
