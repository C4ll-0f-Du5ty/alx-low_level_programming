#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints the strng in reverese
 *
 * @s: the string to be reversed
 *
 */

void print_rev(char *s)
{

	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
