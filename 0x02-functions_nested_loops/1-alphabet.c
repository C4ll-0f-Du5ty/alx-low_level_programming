#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * print_alphabet - utilizes on the _[utchar function
 *
 * Discription: A C program (Positive - negative) function
 *
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
	char sh = 'a';

	while (sh <= 'z')
	{
		_putchar(sh);
		sh++;
	}
	_putchar('\n');
}
