#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: check
 * @size: check
 * Return: a.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(size * nmemb);
	if (a == 0)
		return (NULL);
	i = 0;
	while (i < size * nmemb)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
