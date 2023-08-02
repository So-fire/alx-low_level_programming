#include "main.h"
/**
 * _memset - the funtion
 * @b: constant.
 * @n: bytes.
 * @s: pointers
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
