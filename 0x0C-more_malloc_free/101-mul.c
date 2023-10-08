#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply - multiplys
 * @num1: the first
 * @num2: the second
 *
 * Return: the long values
 */

long multiply(int num1, int num2)
{
	return ((long)(num1 * num2));
}

/**
 * isNumeric - checks if its a digit
 * @str: the pointer
 *
 * Return: Always 1 on success.
 */

int isNumeric(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * main - multiply two big number strings
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: Always 0 on success.
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	long result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!isNumeric(argv[1]) || !isNumeric(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 < 0 || num2 < 0)
	{
		printf("Error\n");
		exit(98);
	}

	result = multiply(num1, num2);

	printf("%ld\n", result);
	return (0);
}
