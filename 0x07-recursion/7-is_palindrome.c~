#include "holberton.h"

/**
 * _pow_recursion - prints an string using recursion
 * @s : check
 * Return: Always 0.
 */
int prime(int x, int y)
{
	if (x % y ==  0)
		return (0);
	else if (y == x - 1)
		return (1);
	return (prime(x, y + 1));

}

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
	if (n == 0)
		return (1);
	return (prime(n, 2));
}
