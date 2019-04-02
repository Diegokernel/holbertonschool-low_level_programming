#include "holberton.h"
/**
 * flip_bits - number of bits to flip to get from one number to another.
 * @n: integer
 * @m: integer
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned long int j;

	j = n ^ m;
	i = 0;
	while (j)
	{
		if ((j & 1) == 1)
			i++;
		j >>= 1;
	}
	return (i);
}
