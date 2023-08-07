#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size : the array size
 * @d: the array.
 *
 * Return: An array.
 */
char *create_array(unsigned int size, char d)
{
	unsigned int num;
	char *array;

	if (size <= 0)
		return (0);
	array = malloc(size);
	if (array == 0)
		return (0);
	num = 0;
	while (num < size)
	{
		array[num] = d;
		num++;
	}
	return (array);
}
