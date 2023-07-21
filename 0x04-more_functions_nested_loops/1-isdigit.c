#include "main.h"
/*
 * File: The file _isdigit.c
 */

/**
 * _isdigit - Function to check the upper case character
 * Return: 1 if the uppercase c else return 0.
 *
 * @c: To note the character
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
