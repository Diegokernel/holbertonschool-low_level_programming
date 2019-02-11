#include "holberton.h"
/**
 * print_alphabet - print the alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar(10);
}
