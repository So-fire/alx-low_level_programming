#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - function
 * @width: columns.
 * @height: row
 *
 * Return: Pointer
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int num, count, digit;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(*array) * height);
	if (array == NULL)
		return (NULL);
	for (digit = 0; digit < height; digit++)
	{
		array[digit] = (int *)malloc(sizeof(int) * width);
		if (array[digit] == NULL)
		{
			while (digit--)
				free(array[digit]);
			free(array);
			return (NULL);
		}
	}

	for (num = 0; num < height; num++)
		for (count = 0; count < width; count++)
			array[num][count] = 0;

	return (array);
}
