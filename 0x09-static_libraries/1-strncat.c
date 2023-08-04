#include "main.h"
/**
 * _strncat - function
 *
 * @t: function that will be added
 * @c: point
 * @n: position
 *
 * Return: a pointer to @dest
 */
char *_strncat(char *t, char *c, int n)
{
	int num_01 = 0;
	int num_02 = 0;

	while (t[num_01] != '\0')
	{
		num_01++;
	}

	while (num_02 < n && c[num_02] != '\0')
	{
		t[num_01 + num_02] = c[num_02];
		num_02++;

	}
	t[num_01 + num_02] = '\0';

	return (t);
}
