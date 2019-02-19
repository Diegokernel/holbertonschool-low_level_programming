#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 * @s : check
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;
	i = 0;
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
