#include "main.h"
/*
 * File: File _isdigit.c
 */

/**
 *print_diagonal - Function to check the upper case character
 * @l: Integer
 *
 *
 * Return: 1 if the uppercase c else return 0.
 */
void print_diagonal(int l)
{
	int length, diagonal;

	if (l > 0)
	{
		for (length = 0; length < l; length++)
		{
			for (diagonal = 0; diagonal < length; diagonal++)
				_putchar(' ');
			_putchar('\\');

			if (length == l - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
