#include "main.h"

/**
 * *_strcpy - assignment 9
 * @dest: to test
 * @src: 2nd one
 * Return: 0 result
 */
char *_strcpy(char *dest, char *src)
{
	int length1, length2;

	length1 = 0;

	while (src[length1] != '\0')
	{
		length1++;
	}

	for (length2 = 0; length2 < length1; length2++)
	{
		dest[length2] = src[length2];
	}
	dest[length2] = '\0';

	return (dest);
}
