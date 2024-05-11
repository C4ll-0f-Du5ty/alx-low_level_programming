#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located,
 *         or NULL if value is not present or list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	/* Define the jump step */
	size_t step = sqrt(size);
	/* Initialize pointers for current and previous nodes */
	listint_t *prev = NULL, *current = list;
	/* Initialize loop counter */
	size_t i;

	/* Check if the list is empty */
	if (list == NULL)
		return (NULL);

	/* Loop through the list */
	while (current && current->index < size && current->n < value)
	{
		/* Move the previous pointer to the current node */
		prev = current;
		/* Move the current node forward by the jump step */
		for (i = 0; current->next && i < step; i++)
			current = current->next;

		/* Print the value checked at the current index */
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		/* Break out of the loop if the current node's value is greater than or equal to the target value */
		if (current->n >= value || current->next == NULL)
			break;
	}

	/* Check if the value is within the list's bounds */
	if (current == NULL || current->index >= size)
	{
		printf("Value not present in list\n");
		return (NULL);
	}

	/* Print the range where the value is found */
	printf("Value found between indexes [%lu] and [%lu]\n",
		   prev ? prev->index : 0, current->index);

	/* Loop through the range to find the value */
	while (prev && prev->index < size && prev->n < value)
	{
		/* Print the value checked at the current index */
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

		/* Return the node if the value is found */
		if (prev->n == value)
			return (prev);

		/* Break out of the loop if the current node's value is greater than the target value */
		if (prev->n > value || prev->next == NULL)
			break;

		/* Move the previous pointer to the next node */
		prev = prev->next;
	}

	/* Print message if the value is not found */
	printf("Value not found in list\n");
	return (NULL);
}
