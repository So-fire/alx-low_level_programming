#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - +ve  numbers.
 * @argc: counts
 * @argv: string
 *
 * Return: 0 else 1.
 */
int main(int argc, char *argv[])
{
	int i, m, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (m = 0; argv[i][m] != '\0'; m++)
		{
			if (!isdigit(argv[i][m]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
