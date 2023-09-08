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
	int sh = 0;

	while (sh < 10)
	{
		putchar(sh + '0');
		sh++;
	}
	putchar('\n');

	return (0);
}
