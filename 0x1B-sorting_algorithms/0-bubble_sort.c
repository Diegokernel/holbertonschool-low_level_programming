#include "sort.h"
/**
 * bubble_sort - Bubble sort Algorithm
 * @array: Array
 * @size: Size of array
 *
 **/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size - i; j++)
		{
			if (array[j - 1] > array[j])
			{
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
				print_array(array, size);
			}
		}
	}
}
