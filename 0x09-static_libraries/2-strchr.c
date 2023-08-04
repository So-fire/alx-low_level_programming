#include "main.h"
#include <stdio.h>
/**
 * _strchr - returns a point
 * @t: string
 * @g: character
 *
 * Return: pointer
 */
char *_strchr(char *t, char g)
{
	int i;

	i = 0;
	while (t[i] != '\0')
	{
		if (t[i] == g)
			return ((t + i));
		i++;
	}
	if (g == '\0')
		return ((t + i));
	return (NULL);
}
