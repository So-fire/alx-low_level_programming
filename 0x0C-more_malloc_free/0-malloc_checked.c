#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - memory allocator
 * @c: bytes to be allocated
 *
 * Return: pointer, malloc fails value is 98
**/
void *malloc_checked(unsigned int c)
{
	char *p;

	p = malloc(c);
	if (p == NULL)
		exit(98);
	return (p);
}
