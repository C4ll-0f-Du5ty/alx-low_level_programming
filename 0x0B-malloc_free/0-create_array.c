#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer to the array initialized or NULL
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *s = malloc(size);

	if (s == 0 || size == 0)
		return (0);

	for (i = 0; i <= size; i++)
		s[i] = c;

	return (s);
}
