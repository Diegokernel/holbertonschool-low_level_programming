#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 * @a : check
 * @b : check
 * @i : check
 * @j : check
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int i;
	int j;

	i = *b;
	j = *a;
	*a = i;
	*b = j;
}
