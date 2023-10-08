#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _calloc - allocates memory for an array, initialized to 0
 * @nmemb: number of elements
 * @size: byte size of each element
 *
 * Return: void pointer to array space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		p[nmemb] = 0;
	return (p);
}
