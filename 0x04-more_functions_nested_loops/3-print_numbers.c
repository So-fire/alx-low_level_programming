#include "main.h"
/*
 * File: The file _isdigit.c
 */

/**
 *print_numbers - Function to check the upper case character
 * Return: 1 if the uppercase c else return 0.
 *
 */
void print_numbers(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
		_putchar((numbers % 10) + '0');

	_putchar('\n');
}
