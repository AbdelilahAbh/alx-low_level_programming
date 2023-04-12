#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * free_grid - function frees a 2D array
 *
 * @grid: first string
 * @height: seconde string
 *
 * Return: void.
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
