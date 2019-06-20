#include "sort.h"

/**
 * selection_sort - sorting by selection
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int aux;

	if (array && size > 1)
	{
		for (i = 0, i < size - 1, i++)
		{
			min = i;
			j = i + 1;
			while (j < size)
			{
				if (array[min] > array[j])
					min = j;
				j++;
			}
			if (i != min)
			{
				aux = array[i];
				array[i] = array[min];
				array[min] = aux;
				print_array(array, size);
			}
		}
	}
}
