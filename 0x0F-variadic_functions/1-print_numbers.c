#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator:  string to be printed between numbers
 * @n: parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;


	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		if (separator != NULL)
		{
		printf("%d", num);
		if (i != (n - 1))
			printf("%s", separator);
		}
		else
			printf("%d", num);
	}
	printf("\n");
	va_end(ap);
}
