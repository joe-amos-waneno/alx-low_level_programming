#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid -Entry point
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: 0 always
 */
void free_grid(int **grid, int height)
{
	int z;

	for (z = 0; z < height; z++)
	{
		free(grid[z]);
	}
	free(grid);
}
