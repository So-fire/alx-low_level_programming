#include "main.h"
/**
 * print_number - The function
 * @number: the number.
 *
 */
void print_number(int number)
{
	unsigned int count;

	if (number < 10 && number >= 0)
	{
		_putchar('0' + number);
		return;
	}
	if (number < 0)
	{
		count = -number;
		_putchar('-');
	}
	else
	{
		count = number;
	}

	if (count >= 10)
	{
		print_number(count / 10);
	}
	_putchar('0' + (count % 10));
}
