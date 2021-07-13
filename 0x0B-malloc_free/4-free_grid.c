#include <stdlib.h>
#include "holberton.h"

/**
 *free_grid - a
 *@grid : a
 *@height : c
 *
 *Return: la
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
