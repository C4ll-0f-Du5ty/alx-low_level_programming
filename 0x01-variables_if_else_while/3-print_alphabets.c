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
	char sh = 'a', ch = 'A';

	while (sh <= 'z')
	{
		putchar(sh);
		sh++;
	}
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
