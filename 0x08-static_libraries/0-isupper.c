/**
 * _isupper - check
 * @c: check
 * Return: returns 1 or 0
 */

#include "holberton.h"

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
