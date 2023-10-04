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
	char *dup = malloc(strlen(str));

	if (str == NULL)
		return (NULL);

	if (dup == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];

	dup[i] = '\0';

	return (dup);
}
