#include "main.h"
#include <stdio.h>

/**
 * _strstr - function
 * @haystack: main string
 * @needle: string
 *
 * Return: nil
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, z, done;

	i = 0;
	z = 0;
	done = 0;
	while (haystack[i] != '\0')
	{
		if (needle[z] == haystack[i])
		{
			done = 1;
			z++;

		}
		else
		{
			done = 0;
			z = 0;
		}

		if (needle[z] == '\0' && done == 1)
			return ((haystack + i - z + 1));
		else if (needle[z] == '\0' && done == 0)
			return (haystack);
		i++;
	}

	return (NULL);
}