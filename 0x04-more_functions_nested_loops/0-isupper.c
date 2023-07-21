#include "main.h"
/*
 * File: This is for _isupper.c
 */

/**
 * _isupper - To check the upper case character
 * Return: 1 if the uppercase is c else return 0.
 * @c: To note the character
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
