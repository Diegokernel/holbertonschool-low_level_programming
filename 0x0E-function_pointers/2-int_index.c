#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: arr
 * @size: size
 * @cmp: pointer
 * Return: r
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]))
			return (i);
			i++;
		}
	}
	return (-1);
}
