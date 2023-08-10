#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - memory
 * @t: memory area
 * @a: char
 *
 * Return: pointer to the memory area t
 */
void *_calloc(unsigned int t, unsigned int a)
{
	char *p;
	unsigned int i;

	if (t == 0 || a == 0)
		return (NULL);

	p = malloc(t * a);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (t * a); i++)
		p[i] = 0;

	return (p);
}

