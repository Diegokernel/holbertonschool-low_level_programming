#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 * @str : check
<<<<<<< HEAD
=======
 * @i : check
>>>>>>> 2b82dd5c6e964b8b127026e3843b4b0c2633fa63
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
