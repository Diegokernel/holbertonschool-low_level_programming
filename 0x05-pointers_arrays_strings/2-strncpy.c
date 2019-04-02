#include "holberton.h"

/**
 * *_strncpy - check the code for Holberton School students.
 * @dest : check
 * @src : check
 * @n : check
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
			}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
			}
	return (dest);
}
