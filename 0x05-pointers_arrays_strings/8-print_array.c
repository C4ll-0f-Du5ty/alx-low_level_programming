#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - prints n elements of an array of integers.
 *
 * @n: elements parameter input
 * @a: string parameter input
 *
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	n -= 1;

	while (n--)
		_putchar(a[n]);
	_putchar('\n');
}
