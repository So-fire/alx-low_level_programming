#include "main.h"
/**
 * _memcpy - function.
 * @dest: path
 * @src: source
 * @n: number of byte
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	num = 0;

	while (num < n)
	{
		dest[num] = src[num];
		num++;
	}
	return (dest);
}
