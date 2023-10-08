#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The input string.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;
	while (s[len])
		len++;
	return (len);
}

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The input character.
 * Return: 1 if it's a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * multiply - Multiplies two big numbers represented as strings.
 * @num1: The first number.
 * @num2: The second number.
 * Return: The result of the multiplication as a string.
 */
char *multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len = len1 + len2;
	int *result = calloc(len, sizeof(int));
	int i, j;
	char *res = malloc(len + 1);

	if (!result)
		return (NULL);

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int n1 = num1[i] - '0';
			int n2 = num2[j] - '0';
			int sum = n1 * n2 + result[i + j + 1];
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}

	while (len > 0 && result[len - 1] == 0)
		len--;

	if (len == 0)
	{
		char *res = malloc(2);
		if (!res)
			return (NULL);
		res[0] = '0';
		res[1] = '\0';
		free(result);
		return (res);
	}

	if (!res)
	{
		free(result);
		return (NULL);
	}

	for (i = 0; i < len; i++)
		res[i] = result[i] + '0';

	res[len] = '\0';
	free(result);
	return (res);
}

/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 * Return: 0 if successful, 98 if an error occurs.
 */
int main(int argc, char *argv[])
{
	char *result = multiply(argv[1], argv[2]);

	if (argc != 3 || !argv[1] || !argv[2])
	{
		printf("Error\n");
		return (98);
	}

	if (!result)
	{
		printf("Error\n");
		return (98);
	}

	printf("%s\n", result);
	free(result);
	return (0);
}
