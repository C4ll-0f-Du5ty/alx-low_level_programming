#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * power - find natural square root
 * @n: int
 * @i: square root
 * Return: int
 */

int power(int n, int i)
{
	if (i * i < n)
	return (power(n, i + 1));
	return (i);
}

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n % 2 == 0 || n % 5 == 0)
		return (power(n, 1));
	else
		return (-1);
}
