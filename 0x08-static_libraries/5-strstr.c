#include "holberton.h"
#include <stdio.h>

/**
 * *_strstr - prints buffer in hexa
 * @haystack: the address of memory to print
 * @needle: the size of the memory to print
 *
 * Return: NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, l;

	l = 0;
	while (needle[l] != '\0')
		l++;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while ((j < l) && (needle[j] == haystack[i]))
		{
			if (j == 0)
				k = i;
			if (j == l - 1)
				return (haystack + k);
			j++;
			i++;
		}
		i++;
	}
	return (NULL);
}
