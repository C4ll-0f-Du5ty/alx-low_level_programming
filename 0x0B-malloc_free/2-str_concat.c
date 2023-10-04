#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr = malloc(strlen(s1) + strlen(s2));
	int i;

	if (ptr == 0)
		return (0);
	for (i = 0; i <= strlen(s1) + strlen(s2); i++)
	{
		if (i < strlen(s1))
			m[i] = s1[i];
		else
			m[i] = s2[i - strlen(s1)];
	}

	return (m);
}
