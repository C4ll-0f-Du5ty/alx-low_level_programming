#include "lists.h"

/**
 * print_list - prints a linked list
 * @h: pointer to the first node
 *
 * Return: size of the list
 */

size_t print_list(const list_t *h)
{
	int node_count = 0;
	int counter = 0;

	while (h)
	{
		counter = list_len(h);
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", counter, h->str);

		h = h->next;
		node_count++;
	}

	return (node_count);
}
