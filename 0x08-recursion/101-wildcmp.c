#include "main.h"
/**
 * wildcmp - compares two strings and returns 1
 * if the strings can be considered identical,
 * otherwise return 0.
 * @string1: the normal string
 * @string2: the special string containing "*"
 *
 * Return: 1 if identical, else 0
 */
int wildcmp(char *string1, char *string2)
{
	if (*string2 == '\0' && *string1 == '\0')
		return (1);

	if (*string2 == '*' && *(string2 + 1) != '\0' && *string1 == '\0')
		return (0);

	if (*string1 == *string2)
		return (wildcmp(string1 + 1, string2 + 1));

	if (*string2 == '*')
		return (wildcmp(string1, string2 + 1) || wildcmp(string1 + 1, string2));

	return (0);
}
