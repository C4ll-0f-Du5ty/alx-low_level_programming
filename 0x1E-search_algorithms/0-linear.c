#include <stdio.h>

/**
 * linear_search - to search for a value
 * @array: the array to search on
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index value
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
}
