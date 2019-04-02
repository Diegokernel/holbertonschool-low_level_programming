#include "3-calc.h"

/**
 * main - Entry point
 * @argc : number of command line arguments
 * @argv : An array containing the program command line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, res;

	if (argc == 4)
	{
		i = atoi(argv[1]);
		j = atoi(argv[3]);
		res = (*get_op_func(argv[2])) (i, j);
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
}
