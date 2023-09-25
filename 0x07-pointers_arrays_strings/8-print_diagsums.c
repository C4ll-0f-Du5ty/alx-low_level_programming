#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - description
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
		sum2 += a[i][size - i - 1];
	}

	printf("%d, %d\n", sum1, sum2);
}