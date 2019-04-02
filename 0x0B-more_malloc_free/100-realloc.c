#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: check
 * @old_size: check
 * @new_size: check
 * Return: ptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		free(ptr);
		ptr = malloc(new_size);
	}
	return (ptr);
}
