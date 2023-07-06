#include "main.h"
#include <stdlib.h>
void
free_grid(int **grid, int height)
{
	int s;

	for (s = 0; s < height; s++)
	{
		free(grid[s]);
	}
	free(grid);
}
