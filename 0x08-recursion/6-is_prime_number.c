#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * primes - check if n is a prime number
 * @i:int
 * @n: int
 * Return: 0 or 1
 */

int primes(int n, int i)
{

	if (i != n / 2 && n % i != 0)
	{
		return (primes(n, i + 2));
	}
	else if (n % i != 0)
	{
		return (1);
	}
	else
		return (0);
}

/**
 * is_prime_number - check if n is a prime number
 * @n: int
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	else
		return (primes(n, 3));
}

