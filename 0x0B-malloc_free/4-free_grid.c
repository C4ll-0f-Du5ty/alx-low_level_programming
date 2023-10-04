#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_grid - free the grid
 * @grid: grid of memories
 * @height: int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = height;

	while (i--)
		free(grid[i]);
	free(grid);
}
