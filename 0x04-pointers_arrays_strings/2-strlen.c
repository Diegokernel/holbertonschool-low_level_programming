#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;

	while (*s++)
		i++;
	return i;
}
