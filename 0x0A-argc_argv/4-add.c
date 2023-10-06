#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints program name, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, j;

	if (argc == 1)
	{
	printf("0\n");
	return (1);
	}

	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i]))
		{
		j += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%i\n", j);
	return (0);
}
