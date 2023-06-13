#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function thay creates a grid and frees it
 * @grid: parameter for the grid
 * @height: parameter for the grid height
 * Return: void;
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
