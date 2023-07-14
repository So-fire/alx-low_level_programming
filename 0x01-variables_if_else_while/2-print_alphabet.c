#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - to display small letters
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);

	putchar('\n');

	return (0);
}
