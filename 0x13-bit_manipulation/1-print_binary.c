#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: integer to convert.
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int test, ntmp;

	ntmp = n;
	if (n == 0)
		_putchar('0');
	for (i = 0; ntmp > 0; i++)
		ntmp >>= 1;
	i--;
	for (; i >= 0; i--)
	{
		test = n >> i;
		if (1 & test)
			_putchar('1');
		else
			_putchar('0');
	}
}
