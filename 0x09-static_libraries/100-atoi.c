#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _atoi - converts a string to an integer
 *
 * @s: string input parameter
 *
 * Return: converted integer from string
*/

int _atoi(char *s)
{
	unsigned int n = 0;
	int sgn = 1;

	do {
		if (*s == '-')
			sgn *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * sgn);
}
