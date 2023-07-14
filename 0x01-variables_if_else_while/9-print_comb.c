#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - final code nine
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		putchar((numbers % 10) + '0');
		if (numbers == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
