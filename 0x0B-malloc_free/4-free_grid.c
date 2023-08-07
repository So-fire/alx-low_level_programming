#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free up memory
 * @grid: target memory
 * @height: size of array.
 *
 */
void free_grid(int **grid, int height)
{
	int num;

	if (grid == NULL || height <= 0)
		return;
	for (num = 0; num < height; num++)
		free(grid[(height - 1) - num]);
	free(grid);
}
