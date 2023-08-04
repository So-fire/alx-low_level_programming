#include "main.h"
/**
 * _memcpy - fuction
 * @t: the bytes
 * @c: source of the bytes to copy.
 * @n: number of bytes to copy over.
 *
 * Return: a pointer to t
 */
char *_memcpy(char *t, char *c, unsigned int n)
{
	unsigned int num;

	num = 0;

	while (num < n)
	{
		t[num] = c[num];
		num++;
	}
	return (t);
}
