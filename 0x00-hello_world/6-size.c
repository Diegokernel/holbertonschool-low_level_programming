#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1, b = 4, c = 8;
	char *d = "byte(s)";

	printf("Size of a char: %i %s\n", a, d);
	printf("Size of an int: %i %s\n", b, d);
	printf("Size of a long int: %i %s\n", c, d);
	printf("Size of a long long int: %i %s\n", c, d);
	printf("Size of a float: %i %s\n", b, d);
	return (0);
}
