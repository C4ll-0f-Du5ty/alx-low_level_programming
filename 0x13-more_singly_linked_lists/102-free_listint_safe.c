#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list safely
 * @h: a pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *next;
	listint_t *current = *h;

	while (current != NULL)
	{
		if (current <= current->next)
		{
			free(current);
			count++;
			*h = NULL;
			break;
		}

		next = current->next;

		free(current);

		current = next;
		count++;
	}

	*h = NULL;
	return (count);
}
