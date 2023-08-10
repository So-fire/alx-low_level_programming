#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - bytes of a string
 * @d1: string1
 * @d2: string2
 * @no: bytes from d2 to d1
 *
 * Return: pointer
 */
char *string_nconcat(char *d1, char *d2, unsigned int no)
{
char *d;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

while (d1 && d1[len1])
len1++;
while (d2 && d2[len2])
len2++;

if (no < len2)
d = malloc(sizeof(char) * (len1 + no + 1));
else
d = malloc(sizeof(char) * (len1 + len2 + 1));

if (!d)
return (NULL);

	while (i < len1)
	{
		d[i] = d1[i];
		i++;
	}

	while (no < len2 && i < (len1 + no))
		d[i++] = d2[j++];

	while (no >= len2 && i < (len1 + len2))
		d[i++] = d2[j++];

	d[i] = '\0';

	return (d);
}
