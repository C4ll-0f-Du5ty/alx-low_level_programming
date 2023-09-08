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
	char sh = 'z';

	while (sh <= 'a')
	{
		putchar(sh);
		sh--;
	}
	putchar('\n');

	return (0);
}
