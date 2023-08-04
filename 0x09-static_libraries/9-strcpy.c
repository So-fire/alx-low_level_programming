#include "main.h"

/**
 * _strcpy - the program
 * @t: character
 * @c: 2nd character
 * Return: 0
 */
char *_strcpy(char *t, char *c)
{
	int len1, len2;

	len1 = 0;

	while (c[len1] != '\0')
	{
		len1++;
	}

	for (len2 = 0; len2 < len1; len2++)
	{
		t[len2] = c[len2];
	}
	t[len2] = '\0';

	return (t);
}
