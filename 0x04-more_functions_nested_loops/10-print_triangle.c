#include "main.h"
/*
 * File: _isdigit.c
 */

/**
 * print _triangle - This is for triangle size
 * @size: This refers to the siz of triangle
 *
 * Return: 1 if the uppercase c else return 0.
 *
 */
void print_triangle(int size)
{
	int triangle, new;

	if (size > 0)
	{
		for (triangle = 1; triangle <= size; triangle++)
		{
			for (new = size - triangle; new > 0; new--)
				_putchar(' ');

			for (new = 0; new < triangle; new++)
				_putchar('#');

			if (triangle == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
