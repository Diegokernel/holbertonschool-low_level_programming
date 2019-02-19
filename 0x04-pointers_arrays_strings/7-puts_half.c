#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 * @str : check
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, n;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i + 1) / 2;
	while (n < i)
	{
		_putchar(str[n]);
		n++;
		}
	_putchar(10);
}
