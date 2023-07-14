#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
		putchar((numbers % 10) + '0');

	putchar('\n');

	return (0);
}
