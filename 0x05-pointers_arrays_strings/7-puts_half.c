#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 */

void puts_half(char *str)
{
	int n = strlen(str), m = n - 1;

	if (n % 2 == 0)
		n = n / 2;
	else if (n % 2 != 0)
		n = (n - 1) / 2;
	for (; m >= n; m--)
		_putchar(str[m]);
	_putchar('\n');
}
