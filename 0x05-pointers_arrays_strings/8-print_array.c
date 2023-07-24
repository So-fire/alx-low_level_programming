#include "main.h"
#include <stdio.h>

/**
 * print_array - print array of integers
 * @a: input array
 * @n: length of array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int array;

	for (array = 0; array < n; array++)
	{
		if (array == 0)
			printf("%d", a[array]);
		else
			printf(", %d", a[array]);
	}
		printf("\n");
}
