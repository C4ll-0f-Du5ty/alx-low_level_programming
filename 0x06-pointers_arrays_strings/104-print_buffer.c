#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - determines if n is a printable ASCII char
 * @n: integer
 * Return: 1 if true, 0 if false
 */

int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * print_buffer - prints a buffer
 * @b: string
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x", (unsigned char)b[i + j]);
				if (j % 2)
					printf(" ");
			}
			else
			{
				printf("  ");
				if (j % 2)
					printf(" ");
			}
		}
		for (j = 0; j < 10 && i + j < size; j++)
		{
			int ch = b[i + j];
			printf("%c", isPrintableASCII(ch) ? ch : '.');
		}
		printf("\n");
	}
}
