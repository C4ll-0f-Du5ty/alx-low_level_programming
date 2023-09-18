#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - prints the strng in reverese
 *
 * @s: the string to be reversed
 *
 */

void rev_string(char *s)
{

	int i, k, f = strlen(s);

	for (i = f - 1; i >= f / 2; i--)
	{
		k = s[i];
		s[i] = s[f - 1 - i];
		s[f - 1 - i] = k;
	}
}
