#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a pointer to a string.
 * @string: string
 *
 * Return: Pointer
 */
char *_strdup(char *string)
{
	int num;
	char *count;

	if (string == 0)
		return (0);
	for (num = 0; string[num]; num++)
		;
	count = malloc(sizeof(char) * (num + 1));
	if (count == 0)
		return (0);
	count[num] = '\0';
		/* printf("%d: %c\n", num, count[num]);*/
	while (num--)
	{
		count[num] = string[num];
		/*printf("%d: %c\n", num, count[num]);*/
	}
	return (count);
}
