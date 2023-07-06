#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int
**alloc_grid(int width, int height)
{
	int i;
	int k;
	int **grid;

	if (width < 1 || height < 1)

		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

	if (grid[i] == NULL)
	{
		while (i >= 0)
		{
			free(grid[i]);
			i--;
		}

		free(grid);
		return (NULL);
	}
	i++;
	}
	i = 0;
	while (i < height)
	{
	for (k = 0; k < width; k++)
		grid[i][k] = 0;
	i++;
	}
	return (grid);
}

