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
	char *result;
	int total_length = 0;
	int current_position = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	int total_length = 0;

	for (int i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	char *result = (char *)malloc(total_length * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	int current_position = 0;

	for (int i = 0; i < ac; i++)
	{
		strcpy(result + current_position, av[i]);
		current_position += strlen(av[i]);
		result[current_position++] = '\t';
		result[current_position++] = '\n';
	}

	result[current_position] = '\0';

	return (result);
}
