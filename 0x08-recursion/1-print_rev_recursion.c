#include "main.h"
/**
 * _print_rev_recursion - function
 * @s: string
 *
 * Return: Null
 */
void _print_rev_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')

		return;
	_print_rev_recursion((s + 1));
	_putchar(*s);
}
