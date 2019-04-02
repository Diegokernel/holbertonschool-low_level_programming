#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - prints buffer in hexa
 * @width: the address of memory to print
 * @height: the size of the memory to print
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
		i = 0;
		while (i < height)
		{
			grid[i] = malloc(width * sizeof(int));
			if (grid[i] == NULL)
			{
				j = 0;
				while (j > 1)
				{
					free(grid[j]);
					j--;
				}
			free(grid);
			return (NULL);
			}
			i++;
		}
		return (grid);
}
