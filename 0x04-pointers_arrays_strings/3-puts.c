#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
			}
	_putchar(10);
}
