#include "main.h"
/**
 * print_chessboard - prints chestboar
 * @a: matrix of board and pieces location.
 *
 * Return: Null
 */
void print_chessboard(char (*a)[8])
{
	unsigned int d, b;

	for (d = 0 ; d < 8 ; d++)
	{
		for (b = 0 ; b < 8 ; b++)
		{
			_putchar(a[d][b]);
		}
		_putchar('\n');
	}

