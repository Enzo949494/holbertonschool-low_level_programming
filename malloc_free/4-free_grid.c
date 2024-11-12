#include <stdlib.h>
#include "main.h"

/**
 * free_grid - libere grid creer par alloc_grid
 * @grid: adresse du grid
 * @height: hauteur de grid
 * Return: rien
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
