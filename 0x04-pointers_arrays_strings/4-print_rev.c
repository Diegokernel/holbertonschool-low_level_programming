#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
			}
	for ( ; i >= 0; i--)
	{
		_putchar(s[i]);
			}
	_putchar(10);
}
