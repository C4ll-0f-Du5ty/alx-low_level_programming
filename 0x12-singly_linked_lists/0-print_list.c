#include "lists.h"

/**
 * print_list - prints a linked list
 * @h: pointer to the first node
 *
 * Return: size of the list
 */

size_t print_list(const list_t *h)
{
	int k = 0;

	while (h)
	{
		printf("[%i] %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
		k++;
	}
	return (k);
}
