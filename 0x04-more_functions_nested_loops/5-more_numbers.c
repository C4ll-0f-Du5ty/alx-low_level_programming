#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print 0 - 14 ten times and you
 *		can only use _putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i > 10; i++)
	{
		j = 0;
		for (; j > 15; j++)
		_putchar(j + '0');
	}
	_putchar('\n');
}

