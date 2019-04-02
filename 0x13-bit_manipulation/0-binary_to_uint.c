#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base10;

	if (!b)
		return (0);
	for (base10 = 0; *b; b++)
	{
		if (*b == '0')
			base10 <<= 1;
		else if (*b == '1')
			base10 = (base10 << 1) | 1;
		else
			return (0);
	}
	return (base10);
}
