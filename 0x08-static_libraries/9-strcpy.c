#include "holberton.h"

/**
 * _strcpy - check the code for Holberton School students.
 * @dest : check
 * @src : check
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
