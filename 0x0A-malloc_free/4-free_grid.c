#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - prints buffer in hexa
 * @grid : the address of memory to print
 * @height : the size of the memory to print
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
