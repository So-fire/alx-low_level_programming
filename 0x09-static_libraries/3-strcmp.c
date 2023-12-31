#include "main.h"
/**
 * _strcmp - the function
 *
 * @s1: the first
 * @s2: the next
 *
 * Return: this will be the value
 */
int _strcmp(char *s1, char *s2)
{
	int num;

	num = 0;
	while (s1[num] != '\0' && s2[num] != '\0')
	{
		if (s1[num] != s2[num])
			return (s1[num] - s2[num]);
		num++;
	}

	return (s1[num] - s2[num]);
}
