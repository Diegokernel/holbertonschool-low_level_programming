#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	int n;

	for (n = 48 ; n < 58 ; n++)
		putchar(n);
	for (ch = 97 ; ch < 103 ; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}
