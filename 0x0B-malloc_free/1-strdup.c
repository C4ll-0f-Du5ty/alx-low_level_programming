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
	char *dup = malloc(strlen(str) + 1);

	if (str == 0 || dup == 0)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];
	return (dup);
}
