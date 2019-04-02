#ifndef VAR_FUNC
#define VAR_FUNC
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct ap
{
	char *p;
	void (*f)(va_list ap1);
} ap_t;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);
void print_string(va_list ap);
#endif
