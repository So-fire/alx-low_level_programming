#include "main.h"
/**
 * _isupper - upper case
 * @c: the character
 * Return: 1 if its uppercase else 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
