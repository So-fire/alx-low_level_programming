#include<unistd.h>
/**
 * main - Beginning
 * Return: program returns 1 if it is successful
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str1, 59);
	return (1);
}
