#include "holberton.h"

/**
 * print_chessboard - prints buffer in hexa
 * @a: the address of memory to print
 *
 * Return: i.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		i++;
		_putchar(10);
	}
}
