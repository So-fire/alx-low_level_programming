#include "main.h"

/**
 * _isalpha - the program
 * @s: characters
 * Return: 0
 */
int _isalpha(int s)
{
	if ((s >= 97 && s <= 122) || (s >= 65 && s <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
