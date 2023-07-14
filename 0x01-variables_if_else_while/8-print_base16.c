#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - code eight
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int numbers;
	char alphabet;

	for (numbers = 0; numbers < 10; numbers++)
		putchar((numbers % 10) + '0');

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
