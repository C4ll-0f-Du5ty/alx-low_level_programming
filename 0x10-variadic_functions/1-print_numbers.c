#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with separator
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the integers to print
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list g;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(g, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		printf("%d%s", va_arg(g, int), i ? (separator ? separator : "") : "\n");
	}
	va_end(g);
}
