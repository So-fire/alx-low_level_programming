#include "main.h"
/**
 * _strncpy - ass 2
 *
 * @dest: string pointer
 * @src: string pointer
 * @n: position of 'n'
 *
 * Return: a pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count_01 = 0;

	for (count_01 = 0; count_01 < n && src[count_01] != '\0'; count_01++)
		dest[count_01] = src[count_01];

	for ( ; count_01 < n ; count_01++)
		dest[count_01] = '\0';

	return (dest);
}
