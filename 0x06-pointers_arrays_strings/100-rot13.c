#include "main.h"
#include <stdio.h>

/**
 * rot13 - This is assignment 8
 * @s: this for changes
 *
 * Return: This is always 0 r
 */
char *rot13(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		while (((s[a] >= 'a' && s[a] <= 'm') || (s[a] >= 'A' && s[a] <= 'M')))
		{
			s[a] += 13;
			a++;
		}
		if ((s[a] >=  'n' && s[a] <= 'z') || (s[a] >=  'N' && s[a] <= 'Z'))
			s[a] -= 13;
		a++;
	}
	return (s);
}
