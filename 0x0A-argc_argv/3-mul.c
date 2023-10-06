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

	i = atoi(argv[1]);
	j = atoi(rgv[2]);

	if (i == NULL || j == NULL)
		printf("Error\n");
	else
	printf("%i\n", i * j);
	return (0);
}
