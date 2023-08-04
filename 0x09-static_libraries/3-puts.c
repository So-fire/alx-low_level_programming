#include "main.h"

/**
 * _puts - the program
 * @r: character to test
 * Return: 0
 */
void _puts(char *r)
{
	int num;

	for (num = 0; r[num] != '\0'; num++)
	{
		_putchar(r[num]);
	}
	_putchar('\n');
}
