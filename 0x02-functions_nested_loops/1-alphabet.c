#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - utilizes on the _putchar function to
 * the alphabet a - z
 */

void print_alphabet(void)
{
	char sh = 'a';

	while (sh <= 'z')
	{
		_putchar(sh);
		sh++;
	}
	_putchar('\n');
}
