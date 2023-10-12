#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings with separator
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the strings to print
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list g;
	char *s;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(g, n);
	for (i = 0; i < n; i++)
	{
	s = va_arg(g, char*);
	printf("%s", s ? s : "(nil)");
	if (separator != NULL)
		printf("%s", i < n - 1 ? separator : "");
	}
	printf("\n");

	va_end(g);
}
