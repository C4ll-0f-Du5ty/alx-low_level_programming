#include "main.h"
#include <stdio.h>

/**
 * print_square - check for a digit
 * @size : number of _ to be printed
 * Return:void
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		j = 0;
		for (; j < size; j++)
			_putchar(35);
	_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
