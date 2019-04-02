#include "holberton.h"

/**
 * _strcmp - check the code for Holberton School students.
 * @s1 : check
 * @s2 : check
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for ( ; *s1 != '\0' && *s1 == *s2; s1++)
		s2++;
	i = *s1 - *s2;
	return (i);
}
