#include "main.h"
/**
* is_seperator - check char.
* @s: the char
*
* Return: 0
*/
int is_seperator(char s)
{
	char count[] = {'\t', '\n', ' ', ',', ';', '!',
		      '.', '?', '\"', '(', ')', '{', '}'};
	int number = 0;

	while (count[number] != '\0')
	{
		if (s == count[number])
			return (1);
		number++;
	}
	return (0);
}

/**
* cap_string - This writes string in  capital letters
* @s: string for use
*
* Return: always 0
*/

char *cap_string(char *s)
{
	int count;
	int number;

	count = 1;
	number = 0;
	while (s[number] != '\0')
	{
		if (count == 1 && (s[number] >= 'a' && s[number] <= 'z'))
		{
			s[number] -= 32;
			count = 0;
		}
		count = is_seperator(s[number]);
		number++;
}
	return (s);
}
