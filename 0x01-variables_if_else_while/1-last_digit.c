#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last;
	char *d = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("%s %i %i and is greater than 5\n", d, n, last);
	}
	else
	if (last == 0)
		{
			printf("%s %i %i and is 0\n", d, n, last);
		}
	else
	if (last < 6 && n != 0)
	{
		printf("%s %i %i and is less than 6 and not 0\n", d, n, last);
	}
	return (0);
}
