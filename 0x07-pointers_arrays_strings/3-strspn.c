#include "main.h"
/**
 * _strspn - function 4 the  length (in bytes) of the initial
 * segments which consist of bytes
 * @s: string
 * @accept: bytes
 *
 * Return: the number (U_INT) of bytes matching accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num, len, count, checker;

	num = 0;
	len = 0;
	checker = 0;
	count = 0;
	while (s[num] != '\0')
	{
		len = 0;
		checker = 0;
		while (accept[len] != '\0')
		{
			if (accept[len] == s[num])
			{
				count++;
				checker = 1;
			/* Break to early increase efficiency */
				break;
			}
			len++;
		}

		if (checker == 0)
			return (count);
		num++;
	}
	return (count);
}
