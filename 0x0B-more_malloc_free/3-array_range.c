#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: check
 * @max: check
 * Return: a.
 */
int *array_range(int min, int max)
{
	int i, j, *a;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(int));
	if (a == 0)
		return (NULL);
	j = min;
	i = 0;
	while (j <= max)
	{
		a[i] = j;
		j++;
		i++;
	}
	return (a);
}
