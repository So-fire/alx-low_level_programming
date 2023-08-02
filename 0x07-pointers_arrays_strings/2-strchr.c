#include "main.h"
#include <stdio.h>
/**
 * _strchr - returns to the first occurance
 * @s: strin
 * @c: char
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((s + i));
		i++;
	}
	if (c == '\0')
		return ((s + i));
	return (NULL);
}
