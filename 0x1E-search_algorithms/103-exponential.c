#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                       using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of value in array,
 *         or -1 if value is not present or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t low, high;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size - 1) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	/*
	 * printf("Searching in array: ");
	 * size_t i;
	 * for (i = low; i <= high; i++)
	 * {
	 * if (i > low)
	 * printf(", ");
	 * printf("%d", array[i]);
	 * }
	 * printf("\n");
	 */
	return (binary_search_(array, low, high, value));
}

/**
 * binary_search_ - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @low: Index representing the lower bound of the search range
 * @high: Index representing the upper bound of the search range
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of value in array,
 *         or -1 if value is not present or array is NULL
 */
int binary_search_(int *array, size_t low, size_t high, int value)
{
	size_t mid;
	size_t i;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i > low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
