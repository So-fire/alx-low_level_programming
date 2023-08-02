#include "main.h"
/**
 * _pow_recursion - function that returns the value of m
 * raised to the power of n
 * @m: value to be changed.
 * @n: determinant variable
 *
 * Return: Sum
 */
int _pow_recursion(int m, int n)
{
	if (n < 0)
		return (-1);
	if (!n)
		return (1);
	return (m * _pow_recursion(m, --n));
}
