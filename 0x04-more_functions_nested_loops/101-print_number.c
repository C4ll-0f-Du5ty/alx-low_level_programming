#include "main.hi"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 *
 * @n: The integer to be printed.
*/

void print_number(int n)
{
	unsigned int s = n;

	/*first check if its negative*/
	if (n < 0)
	{
		_putchar('-');
		s = -s;
	}

	/*print the first few digits*/
	if ((s / 10) > 0)
		print_number(s / 10);

	/*print the last digit*/
	_putchar((s % 10) + 48);
}
