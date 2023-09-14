#include "main.h"
#include <stdio.h>

/**
 * print_numbers - fucktion does print 0 - 9
 *
 * @i is a number to loop on
 *
 * no return as it has void declarition
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i);
	_putchar('\n');
}
