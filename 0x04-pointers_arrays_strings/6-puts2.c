#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str : check
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
			}
	_putchar(10);
}
