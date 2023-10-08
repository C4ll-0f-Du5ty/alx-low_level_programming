#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * big_multiply - multiply two big number strings
 * @f1: the first big number string
 * @f2: the second big number string
 *
 * Return: the product big number string
 */
char *big_multiply(char *f1, char *f2)
{
	char *r;
	int l1, l2, a, b, c, x;

	l1 = strlen(f1);
	l2 = strlen(f2);
	r = malloc(a = x = l1 + l2);
	if (!r)
		printf("Error\n"), exit(98);
	while (a--)
		r[a] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!isdigit(f1[l1]))
		{
			free(r);
			printf("Error\n"), exit(98);
		}
		a = f1[l1] - '0';
		c = 0;

		for (l2 = strlen(f2) - 1; l2 >= 0; l2--)
		{
			if (!isdigit(f2[l2]))
			{
				free(r);
				printf("Error\n"), exit(98);
			}
			b = f2[l2] - '0';

			c += r[l1 + l2 + 1] + (a * b);
			r[l1 + l2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			r[l1 + l2 + 1] += c;
	}
	return (r);
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
	char *r;
	int a, c, x;

	if (argc != 3)
		printf("Error\n"), exit(98);

	x = strlen(argv[1]) + strlen(argv[2]);
	r = big_multiply(argv[1], argv[2]);
	c = 0;
	a = 0;
	while (c < x)
	{
		if (r[c])
			a = 1;
		if (a)
			_putchar(r[c] + '0');
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
