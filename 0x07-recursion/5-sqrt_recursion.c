#include "holberton.h"

/**
 * _sqrt_recursion - prints an string using recursion
 * @n : check
 * rt - root
 * @x : check
 * @y : check
 * Return: Always 0.
 */
int rt(int x, int y)
{
	if (x * x ==  y)
		return (x);
	else if (x * x < y)
		return (rt(x + 1, y));
	else
		return (-1);

}

int _sqrt_recursion(int n)
{
	return (rt(1, n));
}
