#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: a.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = (char *) malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	if (size != 0)
	{
		i = 0;
		while (i < size)
		{
			*(a + i) = c;
			i++;
		}
	}
	return (a);
}
