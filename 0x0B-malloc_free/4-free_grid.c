#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: a two dimentional array
 * @height: its height in integer
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	while (x < height)
	{
		free(grid[x]);
		x++;
	}

	free(grid);
}
