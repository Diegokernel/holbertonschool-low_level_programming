#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints buffer in hexa
 * @a: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: i.
 */
void print_diagsums(int *a, int size)
{
	int i, j, dga, dgb, size2, size3;


	dga = dgb = i = 0;
	size2 = size * size;
	size3 = size - 1;
	while (i < size2)
	{
		dga += a[i];
		i += size + 1;
	}

	j = size3;
	while (j < size2 - 1)
	{
		dgb += a[j];
		j += size3;
	}
	printf(" %i, %i\n", dga, dgb);
}
