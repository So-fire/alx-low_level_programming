#include "main.h"
/**
 * reverse_array - Assignment 4
 *
 * @c: The first number
 * @b: The second number.
 */
void reverse_array(int *c, int b)
{
	int count;
	int number;

	b--;
	for (number = 0;  number < b ; number++)
	{
		count = c[number];
		c[number] = c[b];
		c[b] = count;
		b--;
	}
}
