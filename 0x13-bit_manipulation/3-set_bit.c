#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: integer
 * @index: starting from 0 of the bit you want to get.
 * Return: Returns: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = 1 << index;
	*n |= mask;
	return (1);
}
