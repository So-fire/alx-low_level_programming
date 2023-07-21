#include "main.h"
/*
 * File: File _isdigit.c
 */

/**
 *print_number - Task twelve
 * Return: 1 if the uppercase c else return 0.
 *
 * @t: This is for number
 */
void print_number(int t)
{
	unsigned int numbers = t;

	if (t < 0)
	{
		_putchar('-');
		numbers = -numbers;
	}

	if ((numbers / 10) > 0)
		print_number(numbers / 10);

	_putchar((numbers % 10) + '0');
}
