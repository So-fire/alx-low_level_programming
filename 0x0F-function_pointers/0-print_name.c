#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name
 * @name: name
 * @f: function
 * Return: nil
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;


	f(name);
}
