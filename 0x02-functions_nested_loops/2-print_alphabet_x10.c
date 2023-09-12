#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - utilizes on the _putchar function to
 * the alphabet a - z
 */

void print_alphabet_x10(void)
{
	int s, sh;

	for (a = 0; s < 10; s++)
	{
	while (sh <= 'z')
	{
		_putchar(sh);
		sh++;
	}
	_putchar('\n');
	}
}
