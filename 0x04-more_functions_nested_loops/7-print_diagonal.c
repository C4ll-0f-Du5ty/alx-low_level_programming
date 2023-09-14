#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - check for a digit
 * @n : number of \\ to be printed
 * Return:void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		j = 0;
		for (; j < i; j++)
			_putchar(' ');
		_putchar('\\');
	_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
