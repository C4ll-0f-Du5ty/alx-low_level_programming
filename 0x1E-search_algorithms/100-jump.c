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
	int jump;
	size_t prev = 0;
	int g;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);

	while (array[min(jump, size) - 1] < value)
	{
		/* Print the value checked during the jump phase */
		printf("Value checked array[%u] = [%d]\n", min(jump, size) - 1,
			   array[min(jump, size) - 1]);
		prev = jump;
		jump += sqrt(size);
		if (prev >= size)
			return (-1);
	}

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;

		g = prev;

		if (g == min(jump, size))
			return (-1);
	}

	/* Print the value checked during the linear search phase */
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

	if (array[prev] == value)
	{
		printf("Value found between indexes [%lu] and [%d]\n",
			   prev, min(jump, size));
		return (prev);
	}

	return (-1);
}
