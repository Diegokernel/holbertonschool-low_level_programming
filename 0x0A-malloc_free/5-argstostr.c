#include "holberton.h"
#include <stdlib.h>

/**
 * *argstostr - prints buffer in hexa
 * @ac : the address of memory to print
 * @av : the size of the memory to print
 *
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *a;

	if (ac == 0 || av == 0)
		return (NULL);
		i = j = 0;
		while (j < ac)
		{
			k = 0;
				while (av[j][k] != '\0')
				{
					i++;
					k++;
				}
				i++;
				j++;
		}
		i += 1;
		a = malloc(i * sizeof(char));
		if (a == 0)
			return (NULL);
		j = l = 0;
		while (j < ac)
		{
			k = 0;
			while (av[j][k] != '\0')
			{
				a[l++] = av[j][k];
				k++;
			}
			a[l++] = '\n';
			j++;
		}
		a[l] = '\0';
		return (a);
}
