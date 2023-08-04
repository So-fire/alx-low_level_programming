#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function
 * @c: character
 * @accept: yes
 *
 * Return: return of nil
 */
char *_strpbrk(char *c, char *accept)
{
	unsigned int number, len;

	number = 0;
	len = 0;
	while (c[number] != '\0')
	{
		len = 0;
		while (accept[len] != '\0')
		{
			if (c[number] == accept[len])
				return ((c + number));
			len++;
		}
		number++;
	}
	return (NULL);
}
