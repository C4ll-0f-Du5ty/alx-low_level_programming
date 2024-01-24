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
	const list_t *i = h;

	while (i)
	{
		if (i->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", i->len, i->str);

		i = i->next;
		node_count++;
	}

	return (node_count);
}
