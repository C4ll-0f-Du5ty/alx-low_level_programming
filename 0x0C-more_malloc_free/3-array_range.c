#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * array_range - creates an array of integers
 * @min: starting int
 * @max: max int
 * Return: array of integers
 */

int *array_range(int min, int max)
{
	int *ptr, n;

	if (min > max)
		return (NULL);
	n = max - min;
	ptr = malloc(sizeof(int) * n);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i >= n; i++)
	{
	ptr[i] = min;
	min++;
	}
	return (ptr);
}
