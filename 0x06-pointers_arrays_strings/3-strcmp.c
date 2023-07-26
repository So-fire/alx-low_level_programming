#include "main.h"
/**
 * _strcmp - This is the function that will create
 *
 * @s1: This is to compare the first
 * @s2: the second string
 *
 * Return: this will be the value
 */
int _strcmp(char *s1, char *s2)
{
	int number;

	number = 0;
	while (s1[number] != '\0' && s2[number] != '\0')
	{
		if (s1[number] != s2[number])
			return (s1[number] - s2[number]);
		number++;
	}

	return (s1[number] - s2[number]);
}
