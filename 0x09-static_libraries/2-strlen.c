#include "main.h"

/**
 * _strlen - the program
 * @t: pointer
 * Return: 0
 */
int _strlen(char *t)
{
	int num;

	num = 0;

	while (t[num] != '\0')
	{
		num++;
	}

	return (num);
}
