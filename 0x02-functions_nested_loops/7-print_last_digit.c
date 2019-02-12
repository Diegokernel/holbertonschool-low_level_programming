#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @n : parameter
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int l;

	if (n >= 0)
		l = n % 10;
	else
		l = -1 * (n % 10);
	_putchar('0' + l);
	return (l);
}
