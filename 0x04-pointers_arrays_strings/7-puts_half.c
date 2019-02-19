#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
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
