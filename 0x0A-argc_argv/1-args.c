#include "main.h"
#include <stdio.h>

/**
 * main - Starting point
 * @argc: count
 * @argv: argument variable
 *
 * Return: the count
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (argc - 1);
}
