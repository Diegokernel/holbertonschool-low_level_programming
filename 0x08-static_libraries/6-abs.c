/**
 * _abs - absolute value
 *
 * @n: the integer we are passing through
 *
 * Return: Returns n or 0
 */

#include "holberton.h"

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}

	return (0);
}
