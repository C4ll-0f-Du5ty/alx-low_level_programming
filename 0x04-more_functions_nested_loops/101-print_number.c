#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 *
 * @n: The integer to be printed.
*/

void print_number(int n)
{
	unsigned int s = n;

	if (n < 0)
	{
		_putchar(45);
		s = -s;
	}
	else
		s = n;
	if (s / 10)
		print_number(s / 10);
	_putchar(s % 10 + '0');
}
