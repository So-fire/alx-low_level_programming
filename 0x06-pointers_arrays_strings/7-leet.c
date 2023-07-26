#include "main.h"
/**
 * leet - Iassignment 7
 * @s: This is to make 1337
 *
 * Return: This is the pointer
 */
char *leet(char *s)
{
	char letters[10][2] = {
		{'a', '0' + 4}, {'A', '0' + 4},
		{'e', '0' + 3}, {'E', '0' + 3},
		{'o', '0'}, {'O', '0'},
		{'t', '0' + 7}, {'T', '0' + 7},
		{'l', '0' + 1}, {'L', '0' + 1}};
	int number = 0;
	int count = 0;

	while (s[number] != '\0')
	{
		while (letters[count][0] != '\0')
		{
			if (s[number] == letters[count][0])
				s[number] = letters[count][1];
			count++;
		}
		count = 0;
		number++;
	}
	return (s);
}
