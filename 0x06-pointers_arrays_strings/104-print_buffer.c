#include "main.h"
#include <stdio.h>

/**
 * print_buffer - This assignment 12
 * @buffer: The buffer
 * @size: The result
 */
void print_buffer(char *buffer, int size)
{
	int count, len_01;

	for (count = 0; count < size; count += 10)
	{
		printf("%08x: ", count);

		for (len_01 = 0; len_01 < 10; len_01++)
		{
			if ((len_01 + count) >= size)
				printf("  ");

			else
				printf("%02x", *(buffer + len_01 + count));

			if ((len_01 % 2) != 0 && len_01 != 0)
				printf(" ");
		}

		for (len_01 = 0; len_01 < 10; len_01++)
		{
			if ((len_01 + count) >= size)
				break;

			else if (*(buffer + len_01 + count) >= 31 &&
				 *(buffer + len_01 + count) <= 126)
				printf("%c", *(buffer + len_01 + count));

			else
				printf(".");
		}

		if (count >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
