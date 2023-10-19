#include "lists.h"

/**
 * print_list - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		if (h->str)
			printf("[%lu] %s\n", strlen(h->str), h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		k++;
	}
	return (k);
}
