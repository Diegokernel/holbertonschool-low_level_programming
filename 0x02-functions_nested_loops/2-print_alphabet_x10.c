#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	int c;

	i = 1;

	while (i < 10)
	{
		for (c = 97 ; c<= 122 ; c++)
			_putchar(c);
		_putchar(10);
		i++;
	}
}