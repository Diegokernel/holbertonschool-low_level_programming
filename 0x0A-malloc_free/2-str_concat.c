#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - prints buffer in hexa
 * @s1: the address of memory to print
 * @s2: the size of the memory to print
 *
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *a;

	if (s1 == 0)
		s1 = " ";
	if (s2 == 0)
		s2 = " ";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	k = i + j;
	a = (char *) malloc(k * sizeof(char) + 1);
	if (a == NULL)
		return (NULL);
	if (k != 0)
	{
		l = 0;
		while (l < i)
		{
			a[l] = s1[l];
			l++;
		}
		l = 0;
		while (l < j)
		{
			a[l + i] = s2[l];
			l++;
		}
	}
	return (a);
}
