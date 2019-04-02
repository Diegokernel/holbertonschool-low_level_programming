#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - prints buffer in hexa
 * @str: the size of the memory to print
 *
 * Return: a.
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *a;

	if (str == 0)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	a = (char *) malloc(i * sizeof(char) + 1);
	if (a == NULL)
		return (NULL);
	if (i != 0)
	{
		j = 0;
		while (j < i)
		{
			a[j] = str[j];
			j++;
		}
	}
	return (a);
}
