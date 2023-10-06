#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
	printf("Error\n");
	return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%i\n", i * j);
	return (0);
}
