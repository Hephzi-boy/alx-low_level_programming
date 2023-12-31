#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - This program prints a nested loop to make a grid
 * @width: The input width
 * @height: The input height
 * Return: The pointer to 2 dim
 */

int **alloc_grid(int width, int height)
{
	int **mee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee =  malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		mee[x] = malloc(sizeof(int) * width);

		if (mee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mee[x]);

			free(mee);
			return (NULL);

			}
			}
			for (x = 0; x < height; x++)
			{
			for (y = 0; y < width; y++)
			mee[x][y] = 0;
			}
	return (mee);
	}
