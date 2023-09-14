#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * L_P_N - finds the Largest Prime Number
 *
 * @n: input number
 *
 * Return: square root of x
 *
*/

long int L_P_N(long long n)
{
	int i = 3, L_P;

	for (; i < sqrt(n);)
	{
		if (n % i == 0)
		{
			n /= i;
		L_P = i;

		}
		else
			i++;
	}
	return (L_P);
}

/**
 * main - Entry point
 *
 * @n the desired number to find its L_P_N
 * @R for the Result
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	long long n = 612852475143;
	int R = L_P_N(n);

	printf("%i", R);
}
