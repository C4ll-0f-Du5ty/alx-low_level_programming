#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * wrdcnt - counts the number of words in a string
 * @m: string to count
 *
 * Return: int of number of words
 */
int wrdcnt(char *m)
{
	int i, j = 0;

	for (i = 0; m[i]; i++)
	{
		if (m[i] == ' ')
		{
			if (m[i + 1] != ' ' && m[i + 1] != '\0')
				j++;
		}
		else if (i == 0)
			j++;
	}
	j++;
	return (j);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, k, l, n = 0, q = 0;
	char **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	ptr = (char **)malloc(n * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	ptr[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			ptr[q] = (char *)malloc(j * sizeof(char));
			j--;
			if (ptr[q] == NULL)
			{
				for (k = 0; k < q; k++)
					free(ptr[k]);
				free(ptr[n - 1]);
				free(ptr);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				ptr[q][l] = str[i + l];
			ptr[q][l] = '\0';
			q++;
			i += j;
		}
		else
			i++;
	}
	return (ptr);
}
