#include "main.h"
/**
 * string_toupper - The beginning
 * @s: The string
 *
 * Return: always 0
 */
char *string_toupper(char *s)
{
	int number;

	number = 0;
	while (s[number] != '\0')
	{
		if (s[number] >= 'a' && s[number] <= 'z')
			s[number] -= 32;
		number++;
	}
	s[number] = '\0';

	return (s);
}
