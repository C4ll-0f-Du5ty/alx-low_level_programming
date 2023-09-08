#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Discription: A C program (Positive - negative) function
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 99; i++)
	{
	int j = i + 1;

	for (; j <= 99; j++)
	{
	if (i != j && i < j)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(' ');
		putchar((j / 10) + '0');
		putchar((j % 10) + '0');
		if (((i / 10) + '0') + ((i % 10) + '0') != 17)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	}

	putchar('\n');

	return (0);
}
