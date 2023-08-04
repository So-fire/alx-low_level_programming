#include "main.h"
/**
 * _strcat - the function
 * @t: the string
 * @c: The part to be added
 *
 * Return: return to @t
 */
char *_strcat(char *t, char *c)
{
	int num_01 = 0;
	int num_02 = 0;

	while (t[num_01] != '\0')
	{
		num_01++;
	}

	while (c[num_02] != '\0')
	{
		t[num_01 + num_02] = c[num_02];
		num_02++;

	}
	t[num_01 + num_02] = '\0';

	return (t);
}
