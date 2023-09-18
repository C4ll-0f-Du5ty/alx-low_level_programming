#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every character of a string
 *
 * @str: string parameter input
 *
 * Return: Noting
*/

void puts2(char *str)
{
	if (str % 2 == 0)
		_putchar(str);
	_putchar('\n');
}
