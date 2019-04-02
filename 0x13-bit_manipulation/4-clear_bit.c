#include "holberton.h"
/**
 * clear_bit - returns the value of a bit at a given index.
 * @n: integer
 * @index: starting from 0 of the bit you want to get.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = 1 << index;
	*n &= ~mask;
	return (1);
}
