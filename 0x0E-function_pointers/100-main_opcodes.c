#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc : number of command line arguments
 * @argv : An array containing the program command line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
