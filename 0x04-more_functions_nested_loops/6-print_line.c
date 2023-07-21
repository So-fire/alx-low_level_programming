#include "main.h"
/*
 * File: This is the file _isdigit.c
 */

/**
 * print_line - Function to check the upper case character
 * Return: 1 if the uppercase c else return 0.
 *
 * @n: For number
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}

	_putchar('\n');
}
