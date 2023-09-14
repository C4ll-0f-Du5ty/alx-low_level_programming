#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - check for a digit
 * @n : number of \\ to be printed
 * Return:void
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('\\');
	_putchar('\n');
}
