#include "sort.h"
/**
 * partition - Function to separates the array in sub arrays to be sorted
 *
 * @array: List of integers to be sorted
 * @low: First element in the selected sub array
 * @high: Last integer in the selected sub array
 * @size: lenght of the array
 * Return: Nothing
 */
int partition(int *array, int low, int high, size_t size)
{
	int i, j, pivot, temp;

	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[j] < array[high])
		{
			i++;
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
			if (i != j)
				print_array(array, size);
		}
	}
	pivot = i + 1;
	if (pivot != high && array[pivot] != array[high])
	{
		temp = array[pivot];
			array[pivot] = array[high];
			array[high] = temp;
		print_array(array, size);
	}

	return (pivot);
}
/**
 * re_sort - _sort function partitioned array
 * @array: array to sort
 * @size: size of array
 * @low: first position array
 * @hight: last position array
 */
void re_sort(int *array, int low, int hight, size_t size)
{
	int value_partition = 0;

	if (low < hight)
	{
		value_partition  = partition(array, low, hight, size);

		re_sort(array, low, value_partition - 1, size);
		re_sort(array, value_partition + 1, hight, size);
	}
}
/**
 *quick_sort - sorts an array of integers in ascending order using
 *the Quick sort algorithm
 *@array: array to be sorted
 *@size: size of the array
 *Return: none
 */

void quick_sort(int *array, size_t size)
{
	if (size <= 1 || array == NULL)
		return;
	re_sort(array, 0, size - 1, size);
}
