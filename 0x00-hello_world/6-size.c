#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *d = "byte(s)";

	printf("Size of a char: %i %s\n", sizeof(char), d);
	printf("Size of an int: %i %s\n", sizeof(int), d);
	printf("Size of a long int: %i %s\n", sizeof(long int), d);
	printf("Size of a long long int: %i %s\n", sizeof(long long int), d);
	printf("Size of a float: %i %s\n", sizeof(float), d);
	return (0);
}
