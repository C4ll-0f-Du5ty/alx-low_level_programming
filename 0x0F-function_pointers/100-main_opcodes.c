#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code for The School students.
 * @argc: the number of args
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char *p = (char *)main;
	int g;

	if (argc != 2)
		printf("Error\n"), exit(1);
	g = atoi(argv[1]);
	if (g < 0)
		printf("Error\n"), exit(2);

	while (g--)
		printf("%02hhx%s", *p++, g ? " " : "\n");
	return (0);
}
