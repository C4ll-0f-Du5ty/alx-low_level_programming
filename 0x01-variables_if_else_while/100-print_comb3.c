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
	for (int i = 0; i < 9; i++)
	{
		int j = 0;

		for (; j < 10; j++)
		{
		if (i != j && i < j)
		{
			putchar(i + '0');
			putchar(j + '0');
		if (i + j != 17)
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
