#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * min - returns the minimum of two integers
 * @a: first integer
 * @b: second integer
 * Return: the minimum of a and b
 */
int min(int a, int b)
{
	return (a < b ? a : b);
}

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located,
 * or -1 if value is not present or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, saut, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	saut = 0;

	/* Jump phase */
	while (saut < size && array[saut] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", saut, array[saut]);
		i = saut;
		saut += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, saut);

	/* Adjust saut to ensure it's within the array bounds */
	saut = saut < size - 1 ? saut : size - 1;

	/* Linear search phase */
	while (i < saut && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
