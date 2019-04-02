#include "holberton.h"

/**
 * *rot13 - check the code for Holberton School students.
 * @s : check
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i, j;
	char k[] = " \t\n,;.!?\"(){}";

	i = 0;

	while (s[i] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] -= 32;
		}
		j = 0;
		while (k[j] != '\0')
		{
			if (s[i] == k[j] && s[i + 1] >=97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
			j++;
		}
			i++;
	}
	return (s);
}
