#include "holberton.h"

/**
 * _puts_recursion - prints an string using recursion
 * @s : check
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar (10);
		}
	else
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}

}
