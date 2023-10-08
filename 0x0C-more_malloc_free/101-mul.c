#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply - multiply two big number strings
 * @s1: the first big number string
 * @s2: the second big number string
 *
 * Return: the product big number string
 */

char *multiply(char *s1, char *s2)
{
	char *result;
	int len1, len2, len_result, carry, i, j, k;

	len1 = strlen(s1);
	len2 = strlen(s2);
	len_result = len1 + len2;
	result = malloc(len_result + 1);
	if (!result)
		exit(98);

	for (i = 0; i < len_result; i++)
		result[i] = '0';
	result[len_result] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1, k = i + len2 + 1; j >= 0; j--, k--)
		{
			int num1 = s1[i] - '0';
			int num2 = s2[j] - '0';
			int product = (result[k] - '0') + (num1 * num2) + carry;

			carry = product / 10;
			result[k] = (product % 10) + '0';
		}

		if (carry > 0)
			result[i + 1] = (result[i + 1] - '0') + carry + '0';
	}

	return (result);
}

/**
 * main - multiply two big number strings
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: Always 0 on success.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s num1 num2\n", argv[0]);
		return (1);
	}

	char *result;

	result = multiply(argv[1], argv[2]);

	if (result != NULL)
	{
		printf("%s\n", result);
		free(result);
	}
	else
	{
		fprintf(stderr, "Error: Unable to multiply\n");
		return (1);
	}

	return (0);
}
