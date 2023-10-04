#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *argstostr - description
 * @ac: int
 * @av: arguments
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, counter = 0, j = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, counter++)
		counter += strlen(av[i]);

	s = malloc(counter + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			s[k] = av[i][j];

		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
