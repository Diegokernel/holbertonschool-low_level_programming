#include "variadic_functions.h"
/**
 * print_char - print characters.
 * @ap1: arguments.
 * Return: Always 0.
 */
void print_char(va_list ap1)
{
	printf("%c", va_arg(ap1, int));
}
/**
 * print_int - print integers
 * @ap1: arguments
 * Return: Always 0.
 */
void print_int(va_list ap1)
{
	printf("%d", va_arg(ap1, int));
}
/**
 * print_float - print float numbers
 * @ap1: arguments
 * Return: Always 0.
 */
void print_float(va_list ap1)
{
	printf("%f", va_arg(ap1, double));
}
/**
 * print_string - print a string
 * @ap1: arguments
 * Return: Always 0.
 */
void print_string(va_list ap1)
{
	char *s;

	s =  va_arg(ap1, char *);
	if (s == NULL)
		printf("nil");
	printf("%s", s);
}
/**
 * print_all - print arguments of diferent type
 * @format: argumets
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j;
	char *sep = "";
	ap_t par[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4 && *(par[j].p) != *(format + i))
			j++;
			if (j < 4)
			{
				printf("%s", sep);
				par[j].f(ap);
				sep = ", ";
			}
		i++;
	}
	printf("\n");
	va_end(ap);
}
