#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - This program frees 2d array
 * @grid: 2d grid
 * @height: The height dimension of the grid
 * Description: This program frees memory
 * Return: Nothing
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
