#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char  a;

	while (s[i] != '\0')
	{
		i++;
			}
	i -= 1;
	
	for ( ; i > j; i--)
	{
		a = s[j];
		s[j] = s[i];
		s[i] = a;
		j++;
			}
}
