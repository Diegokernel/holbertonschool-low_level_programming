#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 * @str : check
 * @i : check
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
