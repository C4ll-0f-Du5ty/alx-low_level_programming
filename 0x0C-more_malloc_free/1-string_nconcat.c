#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string.
 * @s2: pointer to 2nd string.
 * @n: Number of bytes from n2 to concatenate.
 *
 * Return:Pointer to space in memory containing concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned long int i;
	int j = 0;
	char *c;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	c = malloc(strlen(s1) + n + 1);

	if (c == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1) + strlen(s2); i++)
	{
		if (i < strlen(s1))
			c[i] = s1[i];
		else if (i < n + strlen(s1))
		{
			c[i] = s2[j];
			j++;
		}
		else if (i >= n + strlen(s1))
			break;
	}

	c[i] = '\0';
	return (c);
}
