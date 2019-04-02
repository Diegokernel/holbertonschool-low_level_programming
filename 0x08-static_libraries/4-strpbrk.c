#include "holberton.h"
#include <stdio.h>

/**
 * *_strpbrk - prints buffer in hexa
 * @s: the address of memory to print
 * @accept: the size of the memory to print
 *
 * Return: i.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = j = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
