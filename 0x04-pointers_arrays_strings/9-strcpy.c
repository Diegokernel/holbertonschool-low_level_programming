#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	while (src[j] != '\0')
	{
		j++;
			}
	for (i =0 ;i < j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
