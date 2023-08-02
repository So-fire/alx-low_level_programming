#include "main.h"
#include <stdio.h>

/**
 * _strstr - function d
 * @hip: source string
 * @nee: strin
 *
 * Return: return
 */
char *_strstr(char *hip, char *nee)
{
	unsigned int i, z, done;

	i = 0;
	z = 0;
	done = 0;
	while (hip[i] != '\0')
	{
		if (nee[z] == hip[i])
		{
			done = 1;
			z++;

		}
		else
		{
			done = 0;
			z = 0;
		}

		if (nee[z] == '\0' && done == 1)
			return ((hip + i - z + 1));
		else if (nee[z] == '\0' && done == 0)
			return (hip);
		i++;
	}

	return (NULL);
}
