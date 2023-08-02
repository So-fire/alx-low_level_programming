#include "main.h"
/**
 * _strlen_recursion - function
 * @s: string
 *
 * Return: Length
 */
int _strlen_recursion(char *s)
{
	/* Base case: null return 0 */
	if (*s == '\0')
		return (0);

	/* Recursive call: Move to next character */
	return (1 + _strlen_recursion(s + 1));

}
