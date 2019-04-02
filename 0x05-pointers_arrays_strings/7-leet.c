#include "holberton.h"

/**
 * *leet - check the code for Holberton School students.
 * @s : check
 * Return: Always 0.
 */
char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (s[i] == a[j])
			{
				s[i] = n[j];
			}
			j++;
		}
			i++;
	}
	return (s);
}
