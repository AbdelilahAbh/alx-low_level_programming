#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * alloc_grid - array of 2 dimensional
 *
 * @width: first string
 * @height: seconde string
 *
 * Return: integer.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (height <= 0 || width <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
