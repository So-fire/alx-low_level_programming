#include "main.h"

/**
 * _puts - function to prints a string
 * @str:- pointer to the string
 * Return: string and a new line
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
