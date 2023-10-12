#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums variable arguments
 * @n: the number of arguments
 * @...: the integers to sum
 *
 * Return: the integer sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list g;

	if (!!n)
		return (0);

	va_start(g, n);
	for (i = 0; i < n; i++)
		sum += va_arg(g, int);
	va_end(g);
	return (sum);
}
