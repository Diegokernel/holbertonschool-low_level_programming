#include "holberton.h"

/**
 * _strlen - check the code for Holberton School students.
 * @s : check
 * @i : check
 * Return: i.
 */
int _strlen(char *s)
{
	int i = 0;
	while (*s++)
		i++;
	return (i);
}
