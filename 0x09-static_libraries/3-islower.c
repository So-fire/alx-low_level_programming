#include "main.h"

/**
 * _islower - the program
 * @alphabets: character to test
 * Return: 0
 */
int _islower(int alphabets)
{
	if (alphabets >= 'a' && alphabets <= 'z')
		return (1);
	else
		return (0);

}
