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

	for (i = 0; i < 8; i++)
	{
		int j = 0;

		for (; j < 9; j++)
		{
			int k = 0;

			for (; k < 10; k++)
			{
			if (i != j && i < j)
			{
			if (j != k && j < k)
			{
			putchar(i + '0');
			putchar(j + '0');
			putchar(k + '0');

			if (i + j != 24)
			{
			putchar(',');
			putchar(' ');
			}
			}
			}
			}
			}
	}
	putchar('\n');

	return (0);
}
