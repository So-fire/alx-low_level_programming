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
	int n;
	int lastfig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastfig = n % 10;

	if (lastfig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastfig);
	}
	else if (lastfig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastfig);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastfig);
	}
	return (0);
}
