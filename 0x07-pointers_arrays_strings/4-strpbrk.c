#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - functio
 * @s: hip
 * @accept: finished
 *
 * Return: pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int num, len;

	num = 0;
	len = 0;
	while (s[num] != '\0')
	{
		len = 0;
		while (accept[len] != '\0')
		{
			if (s[num] == accept[len])
				return ((s + num));
			len++;
		}
		num++;
	}
	return (NULL);
}
