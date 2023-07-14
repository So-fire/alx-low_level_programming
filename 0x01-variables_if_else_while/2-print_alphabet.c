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
	char alphabet = 'a';
	
	while (alphabet <= 'z')
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
