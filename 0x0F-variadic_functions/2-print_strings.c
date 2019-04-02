#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator:  string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *a;


	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(ap, char *);
		if (a == NULL)
			printf("nil");
		else
			printf("%s", a);
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
