#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes te character c to stdout
 * @c: the character to print
 *
 * main - Entry point
 *
 * Discription: A C program (Positive - negative) function
 *
 * Return: always 0 (Success)
 * on error, -1 is returned, and error is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
