#include "sort.h"
/**
 * bubble_sort - Bubble sort Algorithm
 * @array: Array
 * @size: Size of array
 *
 **/
void bubble_sort(int *array, size_t size)
{
	size_t runner1, runner2, temp;

	if (array == NULL || size == 0)
		return;

	for (runner1 = 0; runner1 < size; runner1++)
	{
		for (runner2 = 1; runner2 < size - runner1; runner2++)
		{
			if (array[runner2 - 1] > array[runner2])
			{
				temp = array[runner2];
				array[runner2] = array[runner2 - 1];
				array[runner2 - 1] = temp;
				print_array(array, size);
			}
		}
	}
}
