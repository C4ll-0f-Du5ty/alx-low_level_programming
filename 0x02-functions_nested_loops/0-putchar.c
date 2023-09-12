#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Discription: A C program (Positive - negative) function
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char str[] ="_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(str[i]);
	_putchar("\n");

	return (0);
}
