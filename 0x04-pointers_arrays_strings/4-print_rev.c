#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 * @s : check
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
			}
	j = i - 1;
	for ( ; j >= 0; j--)
	{
		_putchar(s[j]);
			}
	_putchar(10);
}
