#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strstr - description
 * @haystack: string
 * @needle: pointer
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}

	return (NULL);
}

