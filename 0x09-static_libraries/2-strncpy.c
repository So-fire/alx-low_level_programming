#include "main.h"
/**
 * _strncpy - function
 *
 * @t: function that will be added
 * @c: position
 * @n: This will be the position by copying it to 'n'
 *
 * Return: a pointer
 */
char *_strncpy(char *t, char *c, int n)
{
	int count_01 = 0;

	for (count_01 = 0; count_01 < n && c[count_01] != '\0'; count_01++)
		t[count_01] = c[count_01];

	for ( ; count_01 < n ; count_01++)
		t[count_01] = '\0';

	return (t);
}

