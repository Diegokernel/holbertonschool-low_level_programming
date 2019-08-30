#include "search_algos.h"
/**
 * linear_search - searches for a value in array of ints w linear search algo
 * @array: pointer to array of ints
 * @size: size of array
 * @value: value to search
 * Return: index of concidence
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (size == 0)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
