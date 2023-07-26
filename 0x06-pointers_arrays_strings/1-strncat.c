#include "main.h"
/**
 * _strncat - function for two strings
 * @dest: string pointer
 * @src: string pointer source
 * @n: position
 *
 * Return: a pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int num_01 = 0;
	int num_02 = 0;

	while (dest[num_01] != '\0')
	{
		num_01++;
	}

	while (num_02 < n && src[num_02] != '\0')
	{
		dest[num_01 + num_02] = src[num_02];
		num_02++;

	}
	dest[num_01 + num_02] = '\0';

	return (dest);
}
