#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		j = size - 1;
		for (; j > i; j--)
			_putchar(' ');
		for (k = 1; k < i; k++)
			_putchar('#');
	_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
