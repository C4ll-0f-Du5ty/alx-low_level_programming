#include <stdio.h>

/**
 * binary_search - to search an array using binary search
 * @array: the array to search on
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t end = size - 1;
	size_t start = 0;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	while (end >= start)
	{
		size_t mid = start + (end - start) / 2;

		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%i", array[i]);
			if (i < end)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[mid] > value)
		{
			end = mid - 1;
		}
		else if (array[mid] < value)
		{
			start = mid + 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
