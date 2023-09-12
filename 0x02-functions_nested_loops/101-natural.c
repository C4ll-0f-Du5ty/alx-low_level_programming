#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: computes the sum of all
 *		the multiples of 3 or 5
 *		below 1024 (excluded)
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, s;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			s += n;
	}
	printf("%d\n", s);

	return (0);
}
