#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - to know +ve, -ve or zero numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
