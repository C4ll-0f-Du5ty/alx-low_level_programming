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
	int size = strlen(str);
	char *dup = malloc(size + 1);

	if (str == NULL)
		return (NULL);

	if (dup == 0)
		return (NULL);

	for (i = 0; str[i] != size; i++)
		dup[i] = str[i];

	dup[i] = '\0';

	return (dup);
}
