#include "main.h"
/**
* is_sep - check char seperator.
* @s: the char to test. 
*
* Return: always 0
*/
int is_sep(char s)
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
* @s: sring for use
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
		count = is_sep(s[number]);
		number++;
}
	return (s);
}
