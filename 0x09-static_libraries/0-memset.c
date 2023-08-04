#include "main.h"
/**
 * _memset - funtion memory
 * @c: byte.
 * @t: bytes number.
 * @s: pointers.
 *
 * Return: A pointer to memory area s.
 */
char *_memset(char *s, char c, unsigned int t)
{
	unsigned int num;

	num = 0;
	while (num < t)
	{
		s[num] = c;
		num++;
	}

	return (s);
}
