#include "main.h"
/**
 * _memset - constant byte memory.
 * @b: byte.
 * @no: byte number.
 * @p: pointer
 *
 * Return: A pointer to memory area p.
 */
char *_memset(char *p, char b, unsigned int no)
{
	unsigned int num;

	num = 0;
	while (num < no)
	{
		p[num] = b;
		num++;
	}

	return (p);
}
