#include "main.h"
/**
 * _memset - this funtion fills memory with a constant byte.
 * @b: a constant byte.
 * @n: number of bytes.
 * @s: pointers to memory.
 *
 * Return: A pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	num = 0;
	while (num < n)
	{
		s[num] = b;
		num++;
	}

	return (s);
}