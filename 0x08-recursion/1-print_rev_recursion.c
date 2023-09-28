#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - prints string in reverse
 * @s: pointer to string
 * *Return: void
 */

void _print_rev_recursion(char *s)
{
	int i = 0;
	int n = strlen(s);

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
	_putchar(s[n]);
	n--;
	_puts_recursion(s)
	}
}
