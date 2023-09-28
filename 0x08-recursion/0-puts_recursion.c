#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
	_putchar(s[i]);
	_puts_recursion(s[i + 1]);
	}

	return (0);
}
