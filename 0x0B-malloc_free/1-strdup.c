#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int i;
	int size = 0;
	char *dup;

	for (; str[size] != 0; size++)
		;

	dup = malloc(size * sizeof(*str) + 1);

	if (dup == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		dup[i] = str[i];
	return (dup);
}
