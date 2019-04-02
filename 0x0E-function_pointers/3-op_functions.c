#include "3-calc.h"
/**
 * op_add - add 2 numbers
 * @i: number 1
 * @j: number 2
 * Return: add
 */
int op_add(int i, int j)
{
	return (i + j);
}
/**
 * op_sub - sub 2 numbers
 * @i: number 1
 * @j: number 2
 * Return: sub
 */
int op_sub(int i, int j)
{
	return (i - j);
}
/**
 * op_mul - mul 2 numbers
 * @i: number 1
 * @j: number 2
 * Return: mul
 */
int op_mul(int i, int j)
{
	return (i * j);
}
/**
 * op_div - div 2 numbers
 * @i: number 1
 * @j: number 2
 * Return: div
 */
int op_div(int i, int j)
{
	if (j != 0)
		return (i / j);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - mod 2 numbers
 * @i: number 1
 * @j: number 2
 * Return: mod
 */
int op_mod(int i, int j)
{
	if (j != 0)
		return (i % j);
	printf("Error\n");
	exit(100);
}
