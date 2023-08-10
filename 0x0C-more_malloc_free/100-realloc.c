#include "main.h"
#include <stdlib.h>
/**
 * _realloc - memory block.
 * @p: pointer
 * @o: old size
 * @n: new size
 *
 * Return: p
 * if n == o, returns p
 * if malloc fails, returns NULL.
 */
void *_realloc(void *p, unsigned int o, unsigned int n)
{
	if (n == 0 && p != NULL)
	{
		free(p);
		return (NULL);
	}

	if (p == NULL)
		p = malloc(n);

	if (n == o)
		return (p);

	free(p);
	p = malloc(n);

	return (p);
}

