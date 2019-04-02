#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: check
 * @s2: check
 * @n: check
 * Return: a.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
			j++;
		i++;
	}

	if (n > j)
		a = malloc((i + j + 1) * sizeof(char));
	else
		a = malloc((i + n + 1) * sizeof(char));
	if (a == 0)
		return (NULL);
	k = 0;
	while (k < i)
	{
		a[k] = s1[k];
		k++;
	}
	l = 0;
	while (l < j && l < n)
	{
		a[k] = s2[l];
		l++;
		k++;
	}
	a[k] = '\0';
	return (a);
}
