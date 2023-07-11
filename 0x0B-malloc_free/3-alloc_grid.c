#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* alloc_grid - function that returns a pointer
* to a 2 dimensional array of integers.
*
* @width: an integer
* @height: an integer
*
* Return: NULL on failure
* OR If width or height is 0 or negative
*/

int **alloc_grid(int width, int height)
{
	int **grid, x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
	{
		return (Null);
	}
	for (x = 0; x < height, x++)
	{
		grid[x] = malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			free(grid);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			grid[x][y] = 0;
		}
	}

	return (grid);
}
