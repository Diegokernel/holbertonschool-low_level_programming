#include <stdio.h>

/**
 * main - Entry point
 * @argc : number of command line arguments
 * @argv : An array containing the program command line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
