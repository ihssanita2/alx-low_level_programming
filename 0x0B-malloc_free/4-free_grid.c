#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: the gride to frees.
 * @height: height of the array
 * return: void.
 */
void free_grid(int **grid, int height)
{
int i = 0;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
